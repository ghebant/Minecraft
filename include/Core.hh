//
// Created by guillaume on 24/03/18.
//

#ifndef MINECRAFT_CORE_HH
#define MINECRAFT_CORE_HH

#include <irrlicht.h>
#include "Keyboard.hh"

class Core
{

    irr::IrrlichtDevice             *_device;
    irr::video::IVideoDriver        *_driver;
    irr::scene::ISceneManager       *_sceneManager;

    Keyboard keyboard;

public:
    Core();
    Core(Core &); //Copy constructor
    ~Core() {};

    void Draw();
    void drawCube();
    void displayFPS(int &);

    //------GET------
    irr::IrrlichtDevice             *getDevice();
    irr::video::IVideoDriver        *getDriver();
    irr::scene::ISceneManager       *getSceneManager();
    Keyboard                        getKeyboard();
};

#endif //MINECRAFT_CORE_HH
