void reverse(int* a, int l) {
    for (int i=0;i<l/2;i++) {
        int temp = a[i];
        a[i] = a[l-1-i];
        a[l-1-i] = temp;
    }
}

void reversecopy(int *original_arr, int **copy_arr, int n) {
    for (int i = 0; i < n; i++) {
        copy_arr[i] = &original_arr[i];
    }
    reverse(*copy_arr, n);
}

