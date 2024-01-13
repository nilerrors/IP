//
// Created by nilerrors on 06/12/2023.
//

#ifndef WEEK12_WO_STACK_H
#define WEEK12_WO_STACK_H

#include "ArrayList.h"

class Stack : public ArrayList {
public:
    explicit Stack(int capacity);

    ~Stack() override;

    void push(int newItem);
    int pop();
};


#endif //WEEK12_WO_STACK_H
