//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_ITEM_H
#define WEEK13_WO_ITEM_H

#include <string>

using namespace std;

class Item {
    string name;
public:
    explicit Item(const string &name);

    virtual ~Item();

    virtual string toString() const;
};


#endif //WEEK13_WO_ITEM_H
