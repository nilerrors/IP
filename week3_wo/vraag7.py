import math


def sin(x):
    eps = 10 ** (-8)
    n = 0
    term = 0
    volgendeterm = x  # n = 0
    som = volgendeterm
    while abs(term - volgendeterm) > eps:
        term = volgendeterm
        n += 1
        volgendeterm = (-1) ** n / math.factorial(2 * n + 1) * x ** (2 * n + 1)
        som += volgendeterm

    return som

