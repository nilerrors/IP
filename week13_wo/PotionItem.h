//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_POTIONITEM_H
#define WEEK13_WO_POTIONITEM_H

#include <string>
#include "Item.h"

class PotionItem : public Item {
int healthBoost;
public:
    PotionItem(const string &name, int healthBoost);

    virtual ~PotionItem();

    int getHealth_boost() const;

    virtual string toString() const;
};


#endif //WEEK13_WO_POTIONITEM_H
