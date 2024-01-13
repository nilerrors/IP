//
// Created by nilerrors on 13/12/2023.
//

#include <iostream>
#include "Room.h"

using namespace std;

Room::Room(const string &description) : description(description) {}

string Room::toString() const {
    string message = "This is a room called '" + description + "'\n";
    if (characters.empty()) {
        message += "In this room there are no characters.\n";
    } else {
        message += "In this room there are the following characters:";
        for (auto &character : characters) {
            message += "\n" + character->toString();
        }
    }
    if (items.empty()) {
        message += "\nIn this room there are no items.\n";
    } else {
        message += "\nIn this room there are the following items:";
        for (auto &item : items) {
            message += "\n" + item->toString();
        }
    }
    return message;
}

Room::~Room() {
//    vector<Item *> items;
//    vector<Character *> characters;
    for (auto &item : items) {
        delete item;
        item = nullptr;
    }
    for (auto &character : characters) {
        delete character;
        character = nullptr;
    }
    items.clear();
    characters.clear();
}

void Room::addItem(Item *newItem) {
    items.push_back(newItem);
}

void Room::addCharacter(Character *newCharacter) {
    characters.push_back(newCharacter);
}

void Room::usePotion(HeroCharacter *heroCharacter, PotionItem *potion) {
    int potionIndex = -1;
    int heroCharacterIndex = -1;
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == potion) {
            potionIndex = i;
            break;
        }
    }
    if (potionIndex == -1) return;
    for (int i = 0; i < items.size(); i++) {
        if (characters[i] == heroCharacter) {
            heroCharacterIndex = i;
            break;
        }
    }
    if (heroCharacterIndex == -1) return;

    heroCharacter->addPotionItem(potion);
    items.erase(items.begin() + potionIndex);
}

void Room::fight(HeroCharacter *&heroCharacter, MonsterCharacter *&monsterCharacter) {
    int heroCharacterIndex = -1;
    int monsterCharacterIndex = -1;
    for (int i = 0; i < characters.size(); i++) {
        if (characters[i] == heroCharacter) {
            heroCharacterIndex = i;
        }
        if (characters[i] == monsterCharacter) {
            monsterCharacterIndex = i;
        }
    }
    if (heroCharacterIndex == -1 || monsterCharacterIndex == -1) return;

    if (heroCharacter->getTotalPower() > monsterCharacter->getTotalPower()) {
        cout << "Hero wins!" << endl;
        characters.erase(characters.begin() + monsterCharacterIndex);
        delete monsterCharacter;
        monsterCharacter = nullptr;
    } else {
        cout << "Monster wins!" << endl;
        characters.erase(characters.begin() + heroCharacterIndex);
        delete heroCharacter;
        heroCharacter = nullptr;
    }
}

void Room::addItems(const vector<Item *> &items) {
    for (auto item : items) {
        Room::items.push_back(item);
    }
}

void Room::addCharacters(const vector<Character *> &characters) {
    for (auto item : characters) {
        Room::characters.push_back(item);
    }
}

void Room::pickUpWeapon(HeroCharacter *heroCharacter, WeaponItem *weapon) {
    int weaponIndex = -1;
    int heroCharacterIndex = -1;
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == weapon) {
            weaponIndex = i;
            break;
        }
    }
    if (weaponIndex == -1) return;
    for (int i = 0; i < items.size(); i++) {
        if (characters[i] == heroCharacter) {
            heroCharacterIndex = i;
            break;
        }
    }
    if (heroCharacterIndex == -1) return;

    heroCharacter->addWeaponItem(weapon);
    items.erase(items.begin() + weaponIndex);
}
