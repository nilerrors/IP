//
// Created by nilerrors on 13/12/2023.
//

#ifndef WEEK13_WO_DUNGEONROOM_H
#define WEEK13_WO_DUNGEONROOM_H

#include "Room.h"

class DungeonRoom : public Room {
public:
    explicit DungeonRoom(const string &description);

    virtual ~DungeonRoom();
};


#endif //WEEK13_WO_DUNGEONROOM_H
