//
// Created by MCS 7390 LATITUDE on 07/12/2023.
//

#ifndef WEEK12_WO_QUEUE_H
#define WEEK12_WO_QUEUE_H

#include "ArrayList.h"

class Queue : public ArrayList {
public:
    explicit Queue(int capacity);

    ~Queue() override;

    void enqueue(int x);
    int dequeue();
};


#endif //WEEK12_WO_QUEUE_H
