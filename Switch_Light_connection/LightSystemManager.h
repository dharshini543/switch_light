#ifndef LIGHTSYSTEMMANAGER_H
#define LIGHTSYSTEMMANAGER_H

#include "Switch.h"
enum
{
    ConnectLightsToSwitch = 1,
    TurnOnSwitch,
    Exit
};

class LightSystemManager
{
public:
    LightSystemManager();
    ~LightSystemManager();

    void connectLightToWire(int lightNum, Wire *wire);
    void connectWireToSwitch(Wire* wire);
    void select();

private:
    Switch m_switch;

};

#endif // LIGHTSYSTEMMANAGER_H
