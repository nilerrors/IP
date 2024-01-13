//
// Created by nilerrors on 13/12/2023.
//

#include "WeaponItem.h"

WeaponItem::WeaponItem(const string &name, int attackBoost, int defenseBoost) : Item(name), attackBoost(attackBoost),
                                                                                defenseBoost(defenseBoost) {}

string WeaponItem::toString() const {
    return Item::toString() + "\n" +
    "This item changes the attack power by: " + to_string(attackBoost) + "\n" +
    "This item changes the defense power by: " + to_string(defenseBoost);
}

int WeaponItem::getAttack_boost() const {
    return attackBoost;
}

int WeaponItem::getDefense_boost() const {
    return defenseBoost;
}

WeaponItem::~WeaponItem() {

}
