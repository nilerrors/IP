zijde = int(input('zijde: '))

for i in range(zijde + 1):
    for j in range(i):
        if (i > 2 and i < zijde) and (j > 0 and j + 1 < i):
            print(' ', end='')
        else:
            print('*', end='')
    print()

