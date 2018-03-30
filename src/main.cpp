#include "Core.hh"

int main()
{
   Core core;

    core.drawCube();
    while(core.getDevice()->run())
    {
        core.Draw();

        core.getDriver()->endScene();
    }

    core.getDevice()->drop();

    return 0;
}