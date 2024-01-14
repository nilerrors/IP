bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

