basis = int(input('basis: '))
hoogte = int(input('hoogte: '))

for i in range(hoogte):
    if i == 0 or i == hoogte - 1:
        print('*' * basis)
    else:
        print('*' + ' ' * (basis - 2) + '*')

