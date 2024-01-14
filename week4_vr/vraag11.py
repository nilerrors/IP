def minimum_elements(l):
    kleinste = l[0]
    aantal_keer = 1
    for i in range(1, len(l)):
        if kleinste > l[i]:
            kleinste = l[i]
            aantal_keer = 1
        elif kleinste == l[i]:
            aantal_keer += 1
    return kleinste, aantal_keer

