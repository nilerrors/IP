def midden(a, b):
    if len(a) != len(b):
        pass

    coordinaten = []
    for i in range(len(a)):
        coordinaten.append((a[i] + b[i]) / 2)
    return tuple(coordinaten)

