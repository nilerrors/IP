def priemgetallen(n):
    priemen = [2]
    huidig = 2
    while huidig <= n:
        priemen.append(volgend_priemgetal(priemen[-1]))
        huidig += 1
    return priemen

