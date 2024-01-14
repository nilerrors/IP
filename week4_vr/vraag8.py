dice = create_dice()

def lose():
    return dice[2] | dice[3] | dice[12]

def win():
    return dice[7] | dice[11]

