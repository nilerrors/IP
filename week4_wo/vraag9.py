def fibonacci(n):
    fib = [1, 1]
    while len(fib) < n:
        fib.append(fib[-2] + fib[-1])
    return fib

