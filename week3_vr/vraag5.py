def combinatie(n, k):
    return faculteit(n) // (faculteit(k) * faculteit(n - k))

