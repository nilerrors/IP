def remove_multiples(l, n):
    current_pos = 0
    while current_pos < len(l):
        if l[current_pos] % n == 0:
            l.remove(l[current_pos])
        else:
            current_pos += 1


