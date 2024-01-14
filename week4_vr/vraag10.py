def game_ends(worp):
    return worp in lose() | win()

