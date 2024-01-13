//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_TERRAINROOM_H
#define WEEK13_WO_TERRAINROOM_H

#include <string>
#include "Room.h"

using namespace std;

class TerrainRoom : public Room {
    string weatherDescription;
public:
    TerrainRoom(const string &description, const string &weatherDescription);

    virtual ~TerrainRoom();

    virtual string toString() const;
};


#endif //WEEK13_WO_TERRAINROOM_H
