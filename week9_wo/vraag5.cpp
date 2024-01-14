#include <iostream>

using namespace std;

int findMax(int a[], int len) {
    int maxIndex = 0;

    int i = 1;
    while (i < len) {
        if (a[maxIndex] < a[i]) {
            maxIndex = i;
        }
        i++;
    }

    return maxIndex;
}

// hier komt jouw code
int* verwijderMax(int a[], int len) {
    if (len < 2) return nullptr;
    int* arr = new int[len-1];
    int max = findMax(a, len);

    int indexArr = 0;
    for (int i = 0; i < len; i++) {
        if (i != max) {
            arr[indexArr] = a[i];
            indexArr++;
        }
    }

    return arr;
}

// vertrek van deze main
int main(){
    int a[] = {1,5,8,2};
    int* b = verwijderMax(a,4);
    for(int i = 0; i < 3; i++){
        cout << b[i] << endl;
    }
    delete[] b;
    return 0;
}

