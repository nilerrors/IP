def remove_multiples(l, n):
    nieuwe_lijst = l.copy()
    current_pos = 0
    while current_pos < len(nieuwe_lijst):
        if nieuwe_lijst[current_pos] % n == 0:
            nieuwe_lijst.remove(nieuwe_lijst[current_pos])
        else:
            current_pos += 1
    return nieuwe_lijst

