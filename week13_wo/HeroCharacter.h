//
// Created by nilerrors on 14/12/2023.
//

#ifndef WEEK13_WO_HEROCHARACTER_H
#define WEEK13_WO_HEROCHARACTER_H

#include <string>
#include <vector>
#include "Character.h"
#include "Item.h"
#include "PotionItem.h"
#include "WeaponItem.h"

class HeroCharacter : public Character {
    vector<PotionItem *> potion_items;
    vector<WeaponItem *> weapon_items;
public:
    HeroCharacter(const string &name, int attackPower, int defensePower, int healthScore,
                  const vector<PotionItem *> &potionItems, const vector<WeaponItem *> &weaponItems);

    virtual ~HeroCharacter();

    virtual int getAttackPower() const;

    virtual int getDefensePower() const;

    virtual int getHealthScore() const;

    virtual int getTotalPower() const;

    const vector<PotionItem *> &getPotionItems() const;

    void setPotionItems(const vector<PotionItem *> &potionItems);

    void addPotionItem(PotionItem* potionItem);

    const vector<WeaponItem *> &getWeaponItems() const;

    void setWeaponItems(const vector<WeaponItem *> &weaponItems);

    void addWeaponItem(WeaponItem* weaponItem);

    virtual string toString() const;
};


#endif //WEEK13_WO_HEROCHARACTER_H
