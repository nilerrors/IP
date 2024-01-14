dimx = int(input('lengte van de x-as: '))
dimy = int(input('lengte van de y-as: '))
b = int(input('b: '))

print('^')
for i in range(dimy):
    if i == b + 1:
        print('|' + '-' * dimx)
    else:
        print('|')
print('+' + '-' * dimx + '>')

