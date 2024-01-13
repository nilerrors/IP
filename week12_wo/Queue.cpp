//
// Created by MCS 7390 LATITUDE on 07/12/2023.
//

#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int capacity) : ArrayList(capacity) {}

Queue::~Queue() {
    cout << "calling destructor Queue" << endl;
}

void Queue::enqueue(int x) {
    add(x);
}

int Queue::dequeue() {
    int item = 0;
    get(0, item);
    del(0);
    return item;
}
