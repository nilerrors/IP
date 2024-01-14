dimx = int(input('lengte van de x-as: '))
dimy = int(input('lengte van de y-as: '))

print('^')
for _ in range(dimy):
    print('|')
print('+' + '-' * dimx + '>')

