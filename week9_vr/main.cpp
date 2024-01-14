#include <iostream>

using namespace std;


struct ArrayList {
    int size;
    int capacity;
    int* items;
};

ArrayList* createList(int capacity) {
    return new ArrayList{0, capacity, new int[capacity]};
}

void clearList(ArrayList* list) {
    list->size = 0;
}

void destroyList(ArrayList* &list) {
    delete[] list->items;
    delete list;
}

bool isEmpty(ArrayList* list) {
    return list->size == 0;
}

uint32_t getSize(ArrayList* list) {
    return list->size;
}


void print(ArrayList* list) {
    cout << "[";
    for (int i = 0; i < list->size; i++) {
        if (i != 0)
            cout << ",";
        cout << list->items[i];
    }
    cout << "]" << endl;
}


bool set(ArrayList* list, int index, int newItem) {
    if (index < 0 || index > list->size) return false;

    list->items[index] = newItem;
    return true;
}

bool get(ArrayList* list, int index,int &item) {
    if (index < 0 || index > list->size) return false;

    item = list->items[index];
    return true;
}

bool del(ArrayList* list, int index) {
    if (index < 0 || index > list->size) return false;

    for (int i = index; i+1 < list->size; i++) {
        list->items[i] = list->items[i + 1];
    }
    list->size--;
    return true;
}

void doubleCapacity(ArrayList* list) {
    int* items = new int[list->size];
    for (int i = 0; i < list->size; i++) {
        items[i] = list->items[i];
    }
    delete[] list->items;
    list->capacity *= 2;
    list->items = new int[list->capacity];
    for (int i = 0; i < list->size; i++) {
        list->items[i] = items[i];
    }
    delete[] items;
}



int main() {
    // Run tests
    ArrayList* l = createList(4);
    l->size++;
    l->items[0] = 1;
    cout << l->size << endl;
    cout << l->capacity << endl;
    cout << l->items[0] << endl;
    doubleCapacity(l);
    cout << l->size << endl;
    cout << l->capacity << endl;
    cout << l->items[0] << endl;
    destroyList(l);
    return 0;
}
