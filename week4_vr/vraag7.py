def create_dice():
    dice = []
    for i in range(13):
        dice.append(set())
    alle_mogelijkheden = []
    for i in range(1, 7):
        for j in range(1, 7):
            alle_mogelijkheden.append((i, j))
    for i, j in alle_mogelijkheden:
        dice[i + j].add((i, j))
    return dice

