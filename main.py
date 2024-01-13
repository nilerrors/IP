# while True:
#     jaar = int(input("Geen een jaar: "))

#     if jaar % 400 == 0 or (jaar % 4 == 0 and jaar % 100 != 0):
#         print("schrikkeljaar")
#     else:
#         print("geen schrikkeljaar")


# uur = int(input("Hoe laat is het nu (in uren)?"))
# x = int(input("Hoeveel uur verder wil je?"))


# ans = (uur + x) % 24
# print(ans)

# epsilon = 0.0000001

# n = 0
# while True:
#     n += 1
#     x = n / (n + 1)
#     if abs(x - 1) < epsilon:
#         print(n)
#         break


# Algorithme van Euclides

# def GGD(a, b) -> int:
#     while a > 0:
#         if a >= b:
#             a = a - b
#         if a != 0:
#             tmp = a
#             a = b
#             b = tmp

#     return a if a > 0 else b


# print(GGD(49, 35))

# Priemgetallen

# x = int(input("Geef een getal: "))

# is_priem = True
# for i in range(2, x):
#     if x % i == 0:
#         is_priem = False

# print(x, 'is', 'een' if is_priem else 'geen', 'priemgetal.')


# l1 = [1, 3, 6, 7, 8]
# l2 = [2, 6, 9, 9, 10]


# l = []

# Jouw code komt hier (pas enkel lijst l aan)
# added_from_l2 = 0

# for i in range(len(l1)):
#     for j in range(added_from_l2, len(l2)):
#         if l1[i] >= l2[j]:
#             added_from_l2 += 1
#             l.append(l2[j])

#     if l1[i] < l2[added_from_l2]:
#         l.append(l1[i])

# l += l2[added_from_l2:]

# en stopt hier
# print(l)


# n = 5
# nulrij = [0] * n
# M = []
# for i in range(n):
#     rij = nulrij[:]
#     rij[i] = 1
#     M.append(rij)

# print(M)


# def integer_division(deeltal, deler):
#     """
#     doe de gehele deling van deeltal door deler
#     """
#     quotient = 0
#     while deeltal >= deler:
#         quotient += 1
#         deeltal -= deler

#     return quotient


# print(integer_division(7, 3), 7 // 3)
# print(integer_division(123, 5), 123 // 5)
# print(integer_division(0, 7), 0 // 7)
# print(integer_division(7, 7), 7 // 7)
# print(integer_division(15, 7), 15 // 7)


# from math import pi


# def area_of_circle(radius):
#     return radius**2 * pi


# print(area_of_circle(5))


# import math


# def is_priem(x):
#     for i in range(2, x):
#         if math.sqrt(x) < i:
#             break
#         if x % i == 0:
#             return False
#     return True


# def volgend_priem(x):
#     volgend_getal = x
#     while True:
#         volgend_getal += 1
#         if is_priem(volgend_getal):
#             return volgend_getal


# # print(volgend_priem(20))

# # import math


# # def degToRad(x):
# #     return x * (math.pi / 180)


# # print(degToRad(50))


# def priemfactoren(x):
#     priemen = []
#     huidige_priem = 2
#     huidige_getal = x
#     while True:
#         if huidige_getal < 2:
#             break
#         if huidige_getal % huidige_priem == 0:
#             priemen.append(huidige_priem)
#             huidige_getal = huidige_getal / huidige_priem
#         else:
#             huidige_priem += 1

#     return priemen


# print(priemfactoren(100))


# import math


# def sin(x):
#     eps = 10 ** (-8)
#     n = 0
#     term = 0
#     volgendeterm = x  # n = 0
#     som = volgendeterm
#     while abs(term - volgendeterm) > eps:
#         term = volgendeterm
#         n += 1
#         volgendeterm = (-1) ** n / math.factorial(2 * n + 1) * x ** (2 * n + 1)
#         som += volgendeterm

#     return som


# print(sin(1))
# print(sin(2))
# print(sin(4))
# print(sin(1))


# def is_palindrome(s):
#     helft_len_s = len(s) // 2
#     if len(s) % 2 == 0:
#         eerste_helft = s[:helft_len_s]
#     else:
#         eerste_helft = s[: helft_len_s + 1]
#     tweede_helft_reversed = s[helft_len_s:][::-1]
#     return eerste_helft == tweede_helft_reversed


# print(is_palindrome("abba"), True)
# print(is_palindrome("banana"), False)
# print(is_palindrome("straw warts"), True)
# print(is_palindrome("lepel"), True)
# print(is_palindrome("Python"), False)
# print(is_palindrome("koortsmeetsysteemstrook"), True)
# print(is_palindrome("ab"), False)


# def difference(l1, l2):
#     verschil_lijst = [getal for getal in l1 if getal not in l2]
#     verschil_lijst.sort()
#     return verschil_lijst


# l1 = [7, 2, 1]
# l2 = [3, 2]
# print(difference(l1, l2))


# def hms(seconds):
#     aantal_uur = 0
#     aantal_minuten = 0
#     while seconds >= 3600:
#         seconds -= 3600
#         aantal_uur += 1
#     while seconds >= 60:
#         seconds -= 60
#         aantal_minuten += 1

#     return [aantal_uur, aantal_minuten, seconds]


# print(hms(3601))


# def tijdNaarSeconden(uren, minuten, seconden):
#     return uren * 3600 + minuten * 60 + seconden


# def faculteit(getal):
#     totaal = 1
#     for i in range(1, getal + 1):
#         totaal *= i
#     return totaal


# print(faculteit(8))


# def remove_multiples(l, n):
#     current_pos = 0
#     while current_pos < len(l):
#         if l[current_pos] % n == 0:
#             l.remove(l[current_pos])
#         else:
#             current_pos += 1


# l = [3, 5, 2, 6, 8, 9]
# print(l)
# remove_multiples(l, 2)
# print(l)


#         1
#       1 2 3
#     1 2 3 4 5
#   1 2 3 4 5 6 7
# 1 2 3 4 5 6 7 8 9


# def piramide(n):
#     if n <= 0:
#         return

#     alle_getallen = [range(1, (i * 2 + 1) + 1) for i in range(n)]
#     for rij in alle_getallen:
#         print(" " * (len(alle_getallen[-1]) - len(rij)), end="")
#         for getal in rij:
#             if getal == 1:
#                 print("1", end="")
#             else:
#                 print(f" {getal}", end="")
#         print()


# piramide(5)


# def som_veelvouden(n):
#     som = 0
#     for i in range(3, n):
#         if i % 3 == 0 or i % 5 == 0:
#             som += i

#     return som


# print(som_veelvouden(100))


# def midden(a, b):
#     if len(a) != len(b):
#         pass

#     coordinaten = []
#     for i in range(len(a)):
#         coordinaten.append((a[i] + b[i]) / 2)
#     return tuple(coordinaten)


# print(midden((0, 0), (2, 6)))
# print(midden((1, 2, 3, 4, 5), (3, 0, 5, 2, 1)))
# print(midden((1, 1, 1, 1, 1, 1, 1), (3, 3, 3, 3, 3, 3, 3)))


# def tel_getallen(l):
#     aantal_keren = [0] * (max(l) + 1)
#     for getal in l:
#         aantal_keren[getal] += 1

#     for i, aantal in enumerate(aantal_keren):
#         print(i, aantal)


# l = [1, 2, 5, 3, 2, 17, 5, 6, 7, 3, 2, 1, 9, 3]
# tel_getallen(l)


# from alice_book import book

# woorden = book.split()


# def tel_woorden(woorden):
#     aantal_woorden = {woord: 0 for woord in set(woorden)}
#     for woord in woorden:
#         aantal_woorden[woord] += 1
#     return aantal_woorden


# print(tel_woorden(woorden))


# def print_frequenties(aantal_per_woorden):
#     for woord in aantal_per_woorden:
#         print(woord, aantal_per_woorden[woord])


# def list2dict(l1, l2):
#     if len(l1) != len(l2):
#         return

#     return {l1[i]: l2[i] for i in range(len(l1))}


# def tel_elementen(l):
#     return len(set(l))


# def splits(l):
#     return l[: len(l) // 2], l[len(l) // 2 + (1 if len(l) % 2 != 0 else 0) :]


# def create_dice():
#     dice = []
#     for i in range(13):
#         dice.append(set())
#     alle_mogelijkheden = []
#     for i in range(1, 7):
#         for j in range(1, 7):
#             alle_mogelijkheden.append((i, j))
#     for i, j in alle_mogelijkheden:
#         dice[i + j].add((i, j))
#     return dice


# dice = create_dice()
# print(dice[2] | dice[3] | dice[12])


# def multiply_matrices(matrix1, matrix2):
#     if len(matrix1[0]) != len(matrix2):
#         return
#     product = []
#     for i in range(len(matrix1)):
#         product.append([])
#         for j in range(len(matrix2[0])):
#             product_ij = 0
#             for k in range(len(matrix1[0])):
#                 product_ij += matrix1[i][k] * matrix2[k][j]
#             product[i].append(product_ij)
#     return product


# print(
#     multiply_matrices(
#         [[1, 2, 3], [4, 5, 6], [7, 8, 9]], [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#     )
# )
# print(multiply_matrices([[1, 3], [4, 6], [7, 9]], [[1, 2], [4, 5], [7, 8]]))
# print(multiply_matrices([[1, 2], [4, 5], [7, 8]], [[1, 2, 3], [4, 5, 6]]))
# print(multiply_matrices([[1, 2], [4, 5]], [[1, 2], [4, 5]]))
