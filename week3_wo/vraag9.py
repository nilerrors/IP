def is_palindrome(s):
    helft_len_s = len(s) // 2
    if len(s) % 2 == 0:
        eerste_helft = s[:helft_len_s]
    else:
        eerste_helft = s[: helft_len_s + 1]
    tweede_helft_reversed = s[helft_len_s:][::-1]
    return eerste_helft == tweede_helft_reversed

