aantal_zinnen = int(input('Geef het aantal zinnen: '))
aantal_really = int(input('Geen het aantal keer dat really in een zin zit: '))

for _ in range(aantal_zinnen):
    print('We', ', '.join(['really'] * aantal_really), 'like Python!')

