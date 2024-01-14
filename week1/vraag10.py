epsilon = 0.0000001

n = 0
while True:
    n += 1
    x = n / (n + 1)
    if abs(x - 1) < epsilon:
        print(n)
        break
