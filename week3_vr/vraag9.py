def piramide(n):
    if n <= 0:
        return

    alle_getallen = [range(1, (i * 2 + 1) + 1) for i in range(n)]
    for rij in alle_getallen:
        print(" " * (len(alle_getallen[-1]) - len(rij)), end="")
        for getal in rij:
            if getal == 1:
                print("1", end="")
            else:
                print(f" {getal}", end="")
        print()

