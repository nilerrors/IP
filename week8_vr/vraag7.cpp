void shallowcopy(int *original_arr, int **copy_arr, int n) {
    for (int i = 0; i < n; i++) {
        copy_arr[i] = &original_arr[i];
    }
}

