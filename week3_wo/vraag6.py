def priemfactoren(x):
    priemen = []
    huidige_priem = 2
    huidige_getal = x
    while True:
        if huidige_getal < 2:
            break
        if huidige_getal % huidige_priem == 0:
            priemen.append(huidige_priem)
            huidige_getal = huidige_getal / huidige_priem
        else:
            huidige_priem += 1

    return priemen

