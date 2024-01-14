# er zijn 2 variabelen l1 en l2 met waarden resp. l1 = [1, 2] en l2 = [5, 2, 3, 1]

doorsnede = []

# hier komt je code
l1_is_larger = True
if len(l1) < len(l2):
    l1_is_larger = False

l_len_max = len(l1) if l1_is_larger else len(l2)

for i in range(l_len_max):
    if l1_is_larger and l1[i] in l2:
        doorsnede.append(l1[i])
    elif not l1_is_larger and l2[i] in l1:
        doorsnede.append(l2[i])

# de output
doorsnede.sort()
print(doorsnede)

