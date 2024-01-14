n = int(input('lengte van Fibonacci-lijst: '))

fib = []
for i in range(n):
    if i == 0 or i == 1:
        fib.append(1)
    else:
        fib.append(fib[i - 2] + fib[i -1])

print(fib)

