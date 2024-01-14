def splits(l):
    return l[: len(l) // 2], l[len(l) // 2 + (1 if len(l) % 2 != 0 else 0) :]

