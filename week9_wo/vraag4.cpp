struct MyArray {
    int len;
    int* arr;
};

double gemiddelde(MyArray arr) {
    double sum = 0;
    for (int i = 0; i < arr.len; i++) {
        sum += arr.arr[i];
    }
    return sum / arr.len;
}

double mediaan(MyArray arr) {
    if (arr.len % 2 != 0) return (double)arr.arr[arr.len/2];
    return (double)(arr.arr[arr.len/2 - 1] + arr.arr[arr.len/2])/2;
}

MyArray leesMetLengte(MyArray arr) {
    arr.len = leesGetal();
    arr.arr = new int[arr.len];
    for (int i = 0; i < arr.len; i++) {
        arr.arr[i] = leesGetal();
    }
    return  arr;
}



int main() {
    MyArray arr;
    arr = leesMetLengte(arr);
    cout << "Gemiddelde: " << gemiddelde(arr) << endl;
    cout << "Mediaan: " << mediaan(arr) << endl;
    delete[] arr.arr;
    return 0;
}

