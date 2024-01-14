def volgend_priemgetal(x):
    volgend_getal = x
    while True:
        volgend_getal += 1
        if is_priem(volgend_getal):
            return volgend_getal

