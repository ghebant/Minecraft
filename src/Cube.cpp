//
// Created by guillaume on 31/03/18.
//

#include "Cube.hh"

Cube::Cube(Core &core, irr::core::vector3df &pos, int type)
{
    this->cube = core.getSceneManager()->addCubeSceneNode();
    this->cube->setPosition(pos);
    this->cube->setScale(irr::core::vector3df(1,1,1));
    this->cube->setMaterialTexture(0, core.getDriver()->getTexture("Ressources/rock.png"));
    this->cube->setMaterialFlag(irr::video::EMF_NORMALIZE_NORMALS,true);
    this->cube->setMaterialFlag(irr::video::EMF_LIGHTING,false);
    this->cube->setMaterialFlag(irr::video::EMF_GOURAUD_SHADING,true);
}

irr::scene::ISceneNode* Cube::getCube() const
{
    return this->cube;
}