def difference(l1, l2):
    verschil_lijst = [getal for getal in l1 if getal not in l2]
    verschil_lijst.sort()
    return verschil_lijst

