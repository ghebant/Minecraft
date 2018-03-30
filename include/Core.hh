//
// Created by guillaume on 24/03/18.
//

#ifndef MINECRAFT_CORE_HH
#define MINECRAFT_CORE_HH

#include <irrlicht.h>

class Core
{

    irr::IrrlichtDevice             *_device;
    irr::video::IVideoDriver        *_driver;
    irr::scene::ISceneManager       *_sceneManager;

public:
    Core();
    ~Core() {};

    void Draw();
    void drawCube();

    //------GET------
    irr::IrrlichtDevice           *getDevice();
    irr::video::IVideoDriver      *getDriver();
    irr::scene::ISceneManager     *getSceneManager();
};

#endif //MINECRAFT_CORE_HH
