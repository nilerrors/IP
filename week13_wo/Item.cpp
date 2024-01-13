//
// Created by nilerrors on 13/12/2023.
//

#include <iostream>
#include "Item.h"

Item::Item(const string &name) : name(name) {}

string Item::toString() const {
    return "Item name: " + name;
}

Item::~Item() {
}
