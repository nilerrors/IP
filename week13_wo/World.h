//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_WORLD_H
#define WEEK13_WO_WORLD_H

#include <string>
#include <vector>
#include "Level.h"


using namespace std;

class World {
    string name;
    vector<Level*> levels;
public:
    explicit World(const string &name);

    virtual ~World();

    void addLevel(Level *level);
};


#endif //WEEK13_WO_WORLD_H
