int** getPointer(int *b[], int len, int index) {
    if (index < 0 || index > len) return nullptr;
    return &(b[index]);
}

