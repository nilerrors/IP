def maak_sudoku():
    """
    Maak nieuwe sudoku aan met op alle posities None
    """
    sudoku = []
    for i in range(9):
        sudoku.append([None, None, None, None, None, None, None, None, None])
    return sudoku


def dubbels(rij):
    """
    Geef True terug als een element twee keer voorkomt in 'rij'
    """
    for e in range(len(rij)):
        if rij[e] is not None:
            if rij[e] in (rij[:e] + rij[e + 1 :]):
                return True
    return False


def geldig(sudoku):
    """
    Kijkt na of de gegeven sudoku geldig is
    """
    for i in range(9):
        kolom = []
        for j in range(9):
            kolom.append(sudoku[j][i])
        rij = sudoku[i]
        if dubbels(rij) or dubbels(kolom):
            return False

    # TODO in vraag 4.3: Code om de 9 blokken na te kijken op duplicaten
    blokken = []
    for i in range(9):
        blokken.append([])

    for i in range(9):
        # links naar rechts:
        # 0     1     2
        # 3     4     5
        # 6     7     8
        for j in range(9):
            blok = 0
            if i >= 6:
                blok += 6
            elif i >= 3:
                blok += 3
            if j >= 6:
                blok += 2
            elif j >= 3:
                blok += 1
            blokken[blok].append(sudoku[i][j])

    for i in range(9):
        if dubbels(blokken[i]):
            return False

    return True


def print_sudoku(s):
    """
    Help functie om een sudoku mooi uit te printen
    """
    print("+-----------------+-----------------+-----------------+")
    for x in range(9):
        print("|", end="")
        for y in range(9):
            if s[x][y] is not None:
                print(" ", s[x][y], " ", end="")
            else:
                print(f"  _  ", end="")
            if ((y + 1) % 3) != 0:
                print(" ", end="")
            else:
                print("|", end="")
        print()
        if (x + 1) % 3 == 0:
            print("+-----------------+-----------------+-----------------+")
        else:
            print("|                 |                 |                 |")


def mogelijk(sudoku, pos_i, pos_j):
    rij = set(sudoku[pos_i])
    kolom = set()
    for j in range(9):
        kolom.add(sudoku[j][pos_j])

    # TODO in vraag 4.3: Code om de 9 blokken na te kijken op duplicaten
    blokken = []
    for i in range(9):
        blokken.append([])

    for i in range(9):
        # links naar rechts:
        # 0     1     2
        # 3     4     5
        # 6     7     8
        for j in range(9):
            blok = 0
            if i >= 6:
                blok += 6
            elif i >= 3:
                blok += 3
            if j >= 6:
                blok += 2
            elif j >= 3:
                blok += 1
            blokken[blok].append(sudoku[i][j])

    blok = 0
    if pos_i >= 6:
        blok += 6
    elif pos_i >= 3:
        blok += 3
    if pos_j >= 6:
        blok += 2
    elif pos_j >= 3:
        blok += 1

    return list(
        {1, 2, 3, 4, 5, 6, 7, 8, 9} - ((rij | kolom | set(blokken[blok])) - {None})
    )



def vul_aan(sudoku):
    """
    vult de sudoku aan tot dat de sudoku opgelost is of
    er voor lege plaatsen meerdere mogelijkheden zijn
    """
    while any(None in rij for rij in sudoku):
        if not any(
            len(mogelijk(sudoku, rij, kolom)) == 1
            for kolom in range(9)
            for rij in range(9)
        ):
            return
        for i, j in [(i, j) for i in range(9) for j in range(9)]:
            if sudoku[i][j] is None:
                mogelijkheden = mogelijk(sudoku, i, j)
                if len(mogelijkheden) == 0:
                    return
                if len(mogelijkheden) == 1:
                    sudoku[i][j] = mogelijkheden[0]
                    if not geldig(sudoku): sudoku[i][j] = None; return

