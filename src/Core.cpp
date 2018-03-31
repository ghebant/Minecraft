//
// Created by guillaume on 24/03/18.
//

#include "Core.hh"

Core::Core()
{
    this->_device = irr::createDevice (
            irr::video::EDT_OPENGL,
            irr::core::dimension2d<irr::u32>(1080,720),
            32,
            false,
            true,
            false,
            &this->keyboard);
    this->_driver = this->_device->getVideoDriver();
    this->_sceneManager = this->_device->getSceneManager();
    this->getDevice()->getCursorControl()->setVisible(false);
}

void Core::Draw()
{
    this->_driver->beginScene(true, true, irr::video::SColor(0,51,204,204));
    this->_sceneManager->drawAll();
}

void Core::displayFPS(int &lastFPS) {

    int fps = this->getDriver()->getFPS();

    if (lastFPS != fps)
    {
        irr::core::stringw tmp(L"Minecraft [");
        tmp += this->getDriver()->getName();
        tmp += L"] fps: ";
        tmp += fps;

        this->getDevice()->setWindowCaption(tmp.c_str());
        lastFPS = fps;
    }
}

void Core::drawCube()
{
//    irr::scene::IAnimatedMesh* cube = this->_sceneManager->getMesh("Ressources/cube.obj");
    irr::scene::IAnimatedMesh* cube = _sceneManager->getMesh("Ressources/sydney.md2");

    if (!cube)
    {
        _device->drop();
        return;
    }
    irr::scene::IAnimatedMeshSceneNode* node = this->_sceneManager->addAnimatedMeshSceneNode(cube);
    if (node)
    {
        node->setMaterialFlag(irr::video::EMF_LIGHTING, false);
       node->setMaterialTexture( 0, this->_driver->getTexture("Ressources/sydney.bmp") );

    }
    this->_sceneManager->addCameraSceneNode(0, irr::core::vector3df(0,30,-40), irr::core::vector3df(0,5,0));


}

//-------------GET

irr::IrrlichtDevice             *Core::getDevice()
{
    return (this->_device);
}

irr::video::IVideoDriver        *Core::getDriver()
{
    return (this->_driver);
}

irr::scene::ISceneManager       *Core::getSceneManager()
{
    return (this->_sceneManager);
}

Keyboard                        Core::getKeyboard()
{
    return (this->keyboard);
}