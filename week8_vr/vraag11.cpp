int findMin(int *b[], int begin, int end) {
    int minIndex = begin;
    
    int i = begin + 1;
    while (i < end) {
        if (*(b[minIndex])> *(b[i])) {
            minIndex = i;
        }
        i++;
    }
    
    return minIndex;
}

