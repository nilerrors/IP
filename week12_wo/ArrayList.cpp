//
// Created by nilerrors on 06/12/2023.
//

#include "ArrayList.h"
#include <iostream>

using namespace std;

ArrayList::ArrayList(int capacity) : capacity(capacity), size(0), items(new int[capacity]) {}

ArrayList::~ArrayList() {
    delete[] items;
    cout << "calling destructor ArrayList" << endl;
}

void ArrayList::clearList() {
    size = 0;
    for(int i=0; i<capacity; i++){
        items[i] = 0;
    }
}

bool ArrayList::isEmpty() const {
    return size == 0;
}

int ArrayList::getSize() const {
    return size;
}

bool ArrayList::set(int index, int newItem) {
    if(index >= size or index <0 ){
        return false;
    }
    else{
        items[index] = newItem;
        return true;
    }
}

bool ArrayList::get(int index, int &item) const {
    if(index >= size or index <0 ){
        return false;
    }
    else{
        item = items[index];
        return true;
    }
}

bool ArrayList::del(int index) {
    if(index >= size or index <0 ){
        return false;
    }
    else{
        //all elements after the deleted index are now shifted to the left
        for(int i = index; i < size-1;i++){
            items[i] = items[i+1];
        }
        size--;
        return true;
    }
}

void ArrayList::doubleCapacity() {
    int* newItems = new int[capacity * 2];
    //copy content lst->items to newItems
    for(int i=0; i<size; i++){
        newItems[i] = items[i];
    }
    //delete previous list
    delete[] items;
    //update new lst
    items = newItems;
    capacity = capacity * 2;
}

void ArrayList::add(int newItem) {
    if(size == capacity){
        doubleCapacity();
    }
    items[size] = newItem;
    size++;
}

void ArrayList::insert(int index, int newItem) {
    if(size == capacity){
        doubleCapacity();
    }
    for(int i= size - 1; i>=index; i--){
        items[i+1] = items[i];
    }
    items[index] = newItem;
    size +=1;
}

void ArrayList::print() const {
    cout << "[";
    for(int i=0; i < size; i++){
        cout << items[i];
        if(i != size -1)
            cout << ",";
    }
    cout << "]" << endl;
}
