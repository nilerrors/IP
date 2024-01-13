//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_WEAPONITEM_H
#define WEEK13_WO_WEAPONITEM_H

#include <string>
#include "Item.h"

class WeaponItem : public Item {
    int attackBoost;
    int defenseBoost;
public:
    WeaponItem(const string &name, int attackBoost, int defenseBoost);

    virtual ~WeaponItem();

    int getAttack_boost() const;

    int getDefense_boost() const;

    virtual string toString() const;
};


#endif //WEEK13_WO_WEAPONITEM_H
