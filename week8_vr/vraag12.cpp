void sort(int** a, int l) {
    for (int i=0;i<l;i++) {
        int minIndex = findMin(a, i, l);
        int *temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

void sortedcopy(int *original_arr, int **copy_arr, int n) {
    shallowcopy(original_arr, copy_arr, n);
    sort(copy_arr, n);
}

