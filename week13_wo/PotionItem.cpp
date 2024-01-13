//
// Created by nilerrors on 13/12/2023.
//

#include "PotionItem.h"

PotionItem::PotionItem(const string &name, int healthBoost) : Item(name), healthBoost(healthBoost) {}

string PotionItem::toString() const {
    return Item::toString() + "\n" + "This item changes the health score by: " + to_string(healthBoost);
}

int PotionItem::getHealth_boost() const {
    return healthBoost;
}

PotionItem::~PotionItem() {
}
