//
// Created by guillaume on 31/03/18.
//

#include <iostream>
#include "Map.hh"

Map::Map(Core &core_) : core(core_)
{

}

void Map::addCube(irr::core::vector3df &pos, int type)
{
    Cube cube(this->core, pos);
}