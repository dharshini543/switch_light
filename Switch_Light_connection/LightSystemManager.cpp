#include "LightSystemManager.h"
#include"Switch.h"
#include "Light.h"
#include"Wire.h"
#include <iostream>
using namespace std;

LightSystemManager::LightSystemManager()
{
    cout<<"LightSystemManager Constructor"<<endl;
}
LightSystemManager::~LightSystemManager()
{
    cout<<"LightSystemManager Destructor"<<endl;
}

void LightSystemManager::connectLightToWire(int lightNum,Wire* wire)
{
    Light* light = new Light(lightNum);

    //wire->initLight(light);
    light->initWire(wire);
   // m_switch.initWire(wire);
    //this->connectWireToSwitch(wire);
}

void LightSystemManager::connectWireToSwitch(Wire* wire)
{
    m_switch.initWire(wire);
}

void LightSystemManager::select()
{
    int choice,True = 1,lightNum = 0;
    while(True)
    {
        cout<<"Enter"<<endl<<"1. ConnectLightsToSwitch"<<endl<<"2. TurnOnSwitch"<<endl<<"3. Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case ConnectLightsToSwitch:
        {
            Wire* wire = new Wire;
            for(int i = 0;i < 10;i++)
            {
                this->connectLightToWire(++lightNum,wire);
            }
            this->connectWireToSwitch(wire);

        }
        break;
        case TurnOnSwitch:
        {
            m_switch.turnOnSwitch();
        }
        break;
        case Exit:
        {
            True = 0;
        }
        break;
        }
    }
}
