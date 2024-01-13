//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_ROOM_H
#define WEEK13_WO_ROOM_H

#include <string>
#include <vector>
#include "Item.h"
#include "Character.h"
#include "HeroCharacter.h"
#include "MonsterCharacter.h"

using namespace std;

class Room {
    string description;
    vector<Item *> items;
    vector<Character *> characters;
public:
    explicit Room(const string &description);

    virtual ~Room();

    void addItems(const vector<Item *> &items);
    void addCharacters(const vector<Character *> &characters);

    void addItem(Item* newItem);
    void addCharacter(Character* newCharacter);

    void usePotion(HeroCharacter* heroCharacter, PotionItem* potion);
    void pickUpWeapon(HeroCharacter* hero, WeaponItem* weapon);
    void fight(HeroCharacter*& heroCharacter, MonsterCharacter*& monsterCharacter);

    virtual string toString() const;
};


#endif //WEEK13_WO_ROOM_H
