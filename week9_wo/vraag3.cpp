double gemiddelde(int* a, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}


double mediaan(int* a, int n) {
    if (n % 2 != 0) return (double)a[n/2];
    return (double)(a[n/2 - 1] + a[n/2])/2;
}


void leesMetLengte(int* &a, int &n) {
    n = leesGetal();
    a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = leesGetal();
    }
}

int main() {
    int *a;
    int n;
    leesMetLengte(a, n);
    cout << "Gemiddelde: " << gemiddelde(a,n) << endl;
    cout << "Mediaan: " << mediaan(a, n) << endl;
    delete[] a;
    return 0;
}


