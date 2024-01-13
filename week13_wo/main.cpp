#include "Item.h"
#include "PotionItem.h"
#include "WeaponItem.h"
#include "Character.h"
#include "HeroCharacter.h"
#include "MonsterCharacter.h"
#include "World.h"
#include "Level.h"
#include "Room.h"
#include "DungeonRoom.h"
#include "TerrainRoom.h"

#include <iostream>

using namespace std;

int main() {
    World *world = new World("Shire (Middle-earth)");
    Level *level = new Level("Brandy Hall");
    world->addLevel(level);
    Room *roomBilbo = new DungeonRoom("The sleeping room of Bilbo");
    level->addRoom(0, roomBilbo);

    PotionItem *apple = new PotionItem("apple", 1);
    WeaponItem *ring = new WeaponItem("The ring of fire", 12, -3);
    vector<Item *> items = {ring, apple};
    roomBilbo->addItems(items);

    HeroCharacter *bilbo = new HeroCharacter("Bilbo Baggings", 6, 4, 2, {}, {});
    MonsterCharacter *orc = new MonsterCharacter("Orc", 7, 3, 2);
    vector<Character *> characters = {bilbo, orc};
    roomBilbo->addCharacters(characters);

    cout << ">>> We enter a room:" << endl;
    cout << roomBilbo->toString() << endl << endl;

    cout << ">>> " << bilbo->getName() << " picks up a ring" << endl << endl;
    roomBilbo->pickUpWeapon(bilbo, ring);
    cout << bilbo->toString() << endl;
    cout << endl;

    cout << ">>> " << bilbo->getName() << " picks up an apple" << endl << endl;
    roomBilbo->usePotion(bilbo, apple);
    cout << ">>> " << "His health is now " << bilbo->getHealthScore() << endl << endl;

    cout << ">>> The room now looks like this:" << endl;
    cout << roomBilbo->toString() << endl;

    cout << ">>> In the room he encounters a vicious creature! He starts fighting it and ..." << endl;
    roomBilbo->fight(bilbo, orc);

    cout << ">>> The room now looks like this:" << endl;
    cout << roomBilbo->toString() << endl;

    delete world;
}