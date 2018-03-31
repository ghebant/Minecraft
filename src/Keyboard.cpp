//
// Created by guillaume on 31/03/18.
//

#include <Keyboard.hh>
#include <ICameraSceneNode.h>
#include <iostream>

Keyboard::Keyboard()
{
    for (irr::u32 i = 0; i < irr::KEY_KEY_CODES_COUNT; ++i)
        KeyIsDown[i] = false;
}

bool Keyboard::OnEvent(const irr::SEvent& event)
{
    if (event.EventType == irr::EET_KEY_INPUT_EVENT)
        KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;

    return false;
}

bool Keyboard::IsKeyDown(irr::EKEY_CODE keyCode) const
{
    return KeyIsDown[keyCode];
}

void Keyboard::handleInput(irr::scene::ICameraSceneNode *camera, const irr::u32 now, irr::u32 then)
{
    irr::core::vector3df nodePosition = camera->getPosition();

    const irr::f32 MOVEMENT_SPEED = 0.1;

    const irr::f32 frameDeltaTime = (irr::f32)(now - then) / 1000.f; // Time in seconds
    then = now;

    if(this->IsKeyDown(irr::KEY_KEY_Z))
        nodePosition.Z += MOVEMENT_SPEED * frameDeltaTime;
        //nodePosition.Z +=
    else if(this->IsKeyDown(irr::KEY_KEY_S))
        nodePosition.Z -= MOVEMENT_SPEED * frameDeltaTime;
    if(this->IsKeyDown(irr::KEY_KEY_Q))
        nodePosition.X -= MOVEMENT_SPEED * frameDeltaTime;
    else if(this->IsKeyDown(irr::KEY_KEY_D))
        nodePosition.X += MOVEMENT_SPEED * frameDeltaTime;

    camera->setPosition(nodePosition);
}