int telKlinkers(char *a) {
    int count = 0;
    while (*a != '\0') {
        if (*a == 'a' || *a == 'e' || *a == 'i' || *a == 'o' || *a == 'u') count++;
        *a++;
    }
    return count;
}

