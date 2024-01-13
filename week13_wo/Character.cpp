//
// Created by nilerrors on 14/12/2023.
//

#include "Character.h"

Character::Character(const string &name, int attackPower, int defensePower, int healthScore) : name(name),
                                                                                               attackPower(attackPower),
                                                                                               defensePower(
                                                                                                       defensePower),
                                                                                               healthScore(
                                                                                                       healthScore) {}

string Character::toString() const {
    return name + " has the following characteristics:" +
    "\nAttack Power:     " + to_string(attackPower) +
    "\nDefense Power:    " + to_string(defensePower) +
    "\nHealth Score:     " + to_string(healthScore);
}

const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    Character::name = name;
}

int Character::getAttackPower() const {
    return attackPower;
}

void Character::setAttackPower(int attackPower) {
    Character::attackPower = attackPower;
}

int Character::getDefensePower() const {
    return defensePower;
}

void Character::setDefensePower(int defensePower) {
    Character::defensePower = defensePower;
}

int Character::getHealthScore() const {
    return healthScore;
}

void Character::setHealthScore(int healthScore) {
    Character::healthScore = healthScore;
}

int Character::getTotalPower() const {
    return getHealthScore() + getDefensePower() + getAttackPower();
}

Character::~Character() {

}
