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


