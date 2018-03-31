//
// Created by guillaume on 31/03/18.
//

#ifndef MINECRAFT_KEYBOARD_HH
#define MINECRAFT_KEYBOARD_HH

#include <IEventReceiver.h>
#include <irrlicht.h>

class Keyboard : public irr::IEventReceiver
{
    bool KeyIsDown[irr::KEY_KEY_CODES_COUNT];

public:
    Keyboard();

    virtual bool OnEvent(const irr::SEvent& event);
    virtual bool IsKeyDown(irr::EKEY_CODE keyCode) const;
    void handleInput(irr::scene::ICameraSceneNode *, const irr::u32 now, irr::u32 then);
};

#endif //MINECRAFT_KEYBOARD_HH
