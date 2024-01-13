//
// Created by nilerrors on 14/12/2023.
//

#ifndef WEEK13_WO_MONSTERCHARACTER_H
#define WEEK13_WO_MONSTERCHARACTER_H

#include "Character.h"

class MonsterCharacter : public Character {
public:
    MonsterCharacter(const string &name, int attackPower, int defensePower, int healthScore);

    virtual ~MonsterCharacter();
};


#endif //WEEK13_WO_MONSTERCHARACTER_H
