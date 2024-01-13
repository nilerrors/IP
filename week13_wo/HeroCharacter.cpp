//
// Created by nilerrors on 14/12/2023.
//

#include "HeroCharacter.h"

HeroCharacter::HeroCharacter(const string &name, int attackPower, int defensePower, int healthScore,
                             const vector<PotionItem *> &potionItems, const vector<WeaponItem *> &weaponItems)
        : Character(name, attackPower, defensePower, healthScore), potion_items(potionItems),
          weapon_items(weaponItems) {}

const vector<PotionItem *> &HeroCharacter::getPotionItems() const {
    return potion_items;
}

void HeroCharacter::setPotionItems(const vector<PotionItem *> &potionItems) {
    potion_items = potionItems;
}

const vector<WeaponItem *> &HeroCharacter::getWeaponItems() const {
    return weapon_items;
}

void HeroCharacter::setWeaponItems(const vector<WeaponItem *> &weaponItems) {
    weapon_items = weaponItems;
}

int HeroCharacter::getAttackPower() const {
    int total = Character::getAttackPower();
    for (auto &weapon : weapon_items) {
        total += weapon->getAttack_boost();
    }
    return total;
}

int HeroCharacter::getDefensePower() const {
    int total = Character::getDefensePower();
    for (auto &weapon : weapon_items) {
        total += weapon->getDefense_boost();
    }
    return total;
}

int HeroCharacter::getHealthScore() const {
    int total = Character::getHealthScore();
    for (auto &potion : potion_items) {
        total += potion->getHealth_boost();
    }
    return total;
}

string HeroCharacter::toString() const {
    string message = Character::toString() + "\n";
    if (potion_items.empty()) {
        message += getName() + " carries no potion items";
    } else {
        message += getName() + " carries the following potion items:";
        for (auto &potionItem : potion_items) {
            message += "\n" + potionItem->toString();
        }
    }
    if (weapon_items.empty()) {
        message += "\n" + getName() + " carries no weapon items";
    } else {
        message += "\n" + getName() + " carries the following weapon items:";
        for (auto &weaponItem : weapon_items) {
            message += "\n" + weaponItem->toString();
        }
    }

    return message;
}

void HeroCharacter::addPotionItem(PotionItem *potionItem) {
    potion_items.push_back(potionItem);
}

int HeroCharacter::getTotalPower() const {
    return getHealthScore() + getAttackPower() + getDefensePower();
}

HeroCharacter::~HeroCharacter() {
//    vector<PotionItem *> potion_items;
//    vector<WeaponItem *> weapon_items;
    for (auto &potionItem : potion_items) {
        delete potionItem;
        potionItem = nullptr;
    }
    for (auto &weaponItem : weapon_items) {
        delete weaponItem;
        weaponItem = nullptr;
    }
    potion_items.clear();
    weapon_items.clear();
}

void HeroCharacter::addWeaponItem(WeaponItem *weaponItem) {
    weapon_items.push_back(weaponItem);
}
