import math


def is_priem(x):
    for i in range(2, x):
        if math.sqrt(x) < i:
            break
        if x % i == 0:
            return False
    return True

