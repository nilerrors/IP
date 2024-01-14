def som_veelvouden(a, b, c):
    som = 0
    for i in range(0, c):
        if i % a == 0 or i % b == 0:
            som += i

    return som

