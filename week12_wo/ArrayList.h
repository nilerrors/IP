//
// Created by nilerrors on 06/12/2023.
//

#ifndef WEEK12_WO_ARRAYLIST_H
#define WEEK12_WO_ARRAYLIST_H


class ArrayList {
    int size;
    int capacity;
    int* items;

public:
    explicit ArrayList(int capacity);

    virtual ~ArrayList();

    void clearList();
    bool isEmpty() const;
    int getSize() const;
    bool set(int index, int newItem);
    bool get(int index, int& item) const;
    bool del(int index);
    void doubleCapacity();
    void add(int newItem);
    void insert(int index, int newItem);
    void print() const;
};


#endif //WEEK12_WO_ARRAYLIST_H
