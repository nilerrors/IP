l = []

# Jouw code komt hier (pas enkel lijst l aan)
added_from_l2 = 0

for i in range(len(l1)):
    for j in range(added_from_l2, len(l2)):
        if l1[i] >= l2[j]:
            added_from_l2 += 1
            l.append(l2[j])

    if l1[i] < l2[added_from_l2]:
        l.append(l1[i])

l += l2[added_from_l2:]

# en stopt hier
print(l)

