//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_LEVEL_H
#define WEEK13_WO_LEVEL_H


#include <string>
#include <vector>
#include "Room.h"
#include "DungeonRoom.h"
#include "TerrainRoom.h"

using namespace std;

class Level {
    string name;
    vector<Room *> rooms;
public:
    explicit Level(const string &name);

    virtual ~Level();

    void addRoom(int x, Room* room);
    Room* getRoom(int x) const;
};


#endif //WEEK13_WO_LEVEL_H
