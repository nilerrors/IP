def tel_getallen(l):
    aantal_keren = [0] * (max(l) + 1)
    for getal in l:
        aantal_keren[getal] += 1

    for i, aantal in enumerate(aantal_keren):
        print(i, aantal)

