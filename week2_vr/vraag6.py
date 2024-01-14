dimx = int(input('lengte van de x-as: '))
dimy = int(input('lengte van de y-as: '))
a = int(input('a: '))

print('^')
for _ in range(dimy):
    print('|' + ' ' * 10 + '|')
print('+' + '-' * dimx + '>')

