# er is een variabele l met waarde l = [2, 8, 3, 4, 7] die je moet gebruiken. Dien die niet mee in.

# Jouw code komt hier
prev_max = l[0]
for value in l:
    if value > prev_max:
        prev_max = value

print(prev_max)

