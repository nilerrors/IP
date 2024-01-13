//
// Created by nilerrors on 06/12/2023.
//

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int capacity) : ArrayList(capacity) {}

Stack::~Stack() {
    cout << "calling destructor Stack" << endl;
}

void Stack::push(int newItem) {
  add(newItem);
}

int Stack::pop() {
    int item = 0;
    get(getSize() - 1, item);
    del(getSize() - 1);
    return item;
}

