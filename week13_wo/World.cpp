//
// Created by nilerrors on 13/12/2023.
//

#include "World.h"

World::World(const string &name) : name(name) {}

World::~World() {
    for (auto &level : levels) {
        delete level;
        level = nullptr;
    }
    levels.clear();
}

void World::addLevel(Level *level) {
    levels.push_back(level);
}
