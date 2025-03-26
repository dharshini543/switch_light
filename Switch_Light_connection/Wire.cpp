#include "Wire.h"
#include"Light.h"
#include<iostream>
using namespace std;

Wire::Wire()
{
    cout<< "Wire constructor"<<endl;
}

void Wire::initLight(Light* light)
{
    m_connectedLights.push_back(light);
}

Wire::~Wire()
{
    cout<< "Wire Destructor"<<endl;
}

void  Wire::turnOnWire()
{
    cout <<"Wire is ON"<<endl;
    for(auto light:m_connectedLights)
    {
        light->turnOnLight();
    }
}
void Wire::turnOffWire()
{
    cout << "Wire is OFF"<<endl;
    m_light->turnOffLight();
}
