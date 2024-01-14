void print(int *b[], int **begin, int **end) {
    int **temp = begin;
    while (temp != end) {
        cout << " " << **temp;
        temp++;
    }
    cout << " " << **end << endl;
}

