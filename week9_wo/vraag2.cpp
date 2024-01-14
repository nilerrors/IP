#include <vector>
#include <iostream>

using namespace std;


vector<int*> memory;


int* allocate(int n) {
    int* arr = new int[n];
    memory.push_back(arr);
    return arr;
}


void free() {
    for (auto mem : memory) {
        delete[] mem;
    }
    memory.clear();
}


int main() {
    vector<int> getallen = {4,6,2};
    for(auto g:getallen){
        allocate(g);
    }
    cout << memory.size() << endl;
    free();
    cout << memory.size() << endl;
    return 0;
}

