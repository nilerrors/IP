cmake_minimum_required(VERSION 3.22)
project(week13_wo)

set(CMAKE_CXX_STANDARD 17)

add_executable(week13_wo main.cpp
        World.cpp
        World.h
        Level.cpp
        Level.h
        Room.cpp
        Room.h
        DungeonRoom.cpp
        DungeonRoom.h
        TerrainRoom.cpp
        TerrainRoom.h
        Item.cpp
        Item.h
        PotionItem.cpp
        PotionItem.h
        WeaponItem.cpp
        WeaponItem.h
        Character.cpp
        Character.h
        MonsterCharacter.cpp
        MonsterCharacter.h
        HeroCharacter.cpp
        HeroCharacter.h)
