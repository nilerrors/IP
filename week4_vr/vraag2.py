def is_prime(n):
    """
    check whether n is a prime number
    :param n: the number being tested
    :return: True iff the number is prime

    >>> is_prime(2)
    True
    >>> is_prime(4)
    False
    """
    if n <= 0:
        return None

    for i in range(2, n):
        if n % i == 0:
            return False

    return True

