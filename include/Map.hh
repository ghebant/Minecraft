//
// Created by guillaume on 31/03/18.
//

#ifndef MINECRAFT_MAP_HH
#define MINECRAFT_MAP_HH

#include "Cube.hh"
#include <vector>

class Map
{
    Core &core;
    std::vector<Cube> map;

public:
    Map(Core &core);
    ~Map() {}

    void addCube(irr::core::vector3df &pos, int type = 3);
};

#endif //MINECRAFT_MAP_HH
