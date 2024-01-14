def priem_xof_fib(n):
    return (set(fibonacci(n)) - set(priemgetallen(n))) | (set(priemgetallen(n)) - set(fibonacci(n)))

