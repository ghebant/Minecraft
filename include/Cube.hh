//
// Created by guillaume on 31/03/18.
//

#ifndef MINECRAFT_CUBE_HH
#define MINECRAFT_CUBE_HH

#include "Core.hh"

class Cube
{
    irr::scene::ISceneNode* cube;

public:
    Cube(Core &core, irr::core::vector3df &pos, int type = 3);
    ~Cube() {}

    irr::scene::ISceneNode* getCube() const;
};

#endif //MINECRAFT_CUBE_HH
