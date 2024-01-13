//
// Created by nilerrors on 14/12/2023.
//

#ifndef WEEK13_WO_CHARACTER_H
#define WEEK13_WO_CHARACTER_H

#include <string>

using namespace std;

class Character {
    string name;
    int attackPower;
    int defensePower;
    int healthScore;
public:
    Character(const string &name, int attackPower, int defensePower, int healthScore);

    virtual ~Character();

    virtual const string &getName() const;

    virtual void setName(const string &name);

    virtual int getAttackPower() const;

    virtual void setAttackPower(int attackPower);

    virtual int getDefensePower() const;

    virtual void setDefensePower(int defensePower);

    virtual int getHealthScore() const;

    virtual void setHealthScore(int healthScore);

    virtual int getTotalPower() const;

    virtual string toString() const;
};


#endif //WEEK13_WO_CHARACTER_H
