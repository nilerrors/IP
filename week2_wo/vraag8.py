# hier komt je code, de variabele hotel werd reeds aangemaakt, zet die NIET in je code anders gaan de extra testen niet werken
sum = 0
for i in range(len(hotel)):
    if i % 2 == 1:
        sum += hotel[i]
print(sum)

