//
// Created by nilerrors on 13/12/2023.
//

#include "Level.h"

Level::Level(const string &name) : name(name) {
    rooms = {nullptr, nullptr, nullptr, nullptr, nullptr};
}

Level::~Level() {
    for (auto &room : rooms) {
        delete room;
        room = nullptr;
    }
    rooms.clear();
}

void Level::addRoom(int x, Room *room) {
    rooms.insert(rooms.begin() + x, room);
}

Room *Level::getRoom(int x) const {
    if (x < 0 || x >= rooms.size()) return nullptr;
    return rooms[x];
}
