jaar = int(input("Geef een jaar op"))

if jaar % 400 == 0 or (jaar % 4 == 0 and jaar % 100 != 0):
    print("--schrikkeljaar--")
else:
    print("--geen schrikkeljaar--")
    