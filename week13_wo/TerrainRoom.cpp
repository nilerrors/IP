//
// Created by nilerrors on 13/12/2023.
//

#include "TerrainRoom.h"

TerrainRoom::TerrainRoom(const string &description, const string &weatherDescription) : Room(description),
                                                                                        weatherDescription(
                                                                                                weatherDescription) {}

string TerrainRoom::toString() const {
    return Room::toString() + "\n" + "The weather conditions in this room are " + weatherDescription;
}

TerrainRoom::~TerrainRoom() {

}
