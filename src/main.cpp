#include <Map.hh>
#include <Keyboard.hh>
#include <iostream>
#include "Core.hh"

int main()
{
    Core core;
    Map map(core);

    //CAMERA
    //core.getSceneManager()->addCameraSceneNode(0, irr::core::vector3df(0,30,-40), irr::core::vector3df(0,5,0));
    irr::scene::ICameraSceneNode *camera = core.getSceneManager()->addCameraSceneNodeFPS();
    camera->setPosition(irr::core::vector3df(0,30,-40));

    //FPS COUNT
    int lastFPS = -1;

    //deplacement
    irr::u32 then = core.getDevice()->getTimer()->getTime();

    int space = 12;
    for (int i = 0; i <= 50000; i++)
    {
        irr::core::vector3df pos(space,0,5);
        map.addCube(pos);
        space += 11;
    }

    while(core.getDevice()->run())
    {
        //Map.maj();
        const irr::u32 now = core.getDevice()->getTimer()->getTime();
        core.getKeyboard().handleInput(camera, now, then);
        core.Draw();

        //std::cout << "X = " << camera->getTarget().X << " Y = " << camera->getTarget().Y << " Z = " << camera->getTarget().Z << std::endl;

        core.getDriver()->endScene();
        core.displayFPS(lastFPS);
    }

    core.getDevice()->drop();

    return 0;
}