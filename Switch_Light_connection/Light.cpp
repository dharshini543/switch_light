#include "Light.h"
#include<iostream>
using namespace std;

Light::Light(int Lightnum)
{
    cout<< "Light constructor"<<endl;
    m_Lightnum = Lightnum;
}

void Light::initWire(Wire* wire)
{
    m_wire = wire;
    m_wire->initLight(this);
}

Light::~Light()
{
    cout<< "Light Destructor"<<endl;
}

void Light::turnOnLight()
{
    cout<<"Light "<<m_Lightnum<<" is turned ON"<<endl;
}

void Light::turnOffLight()
{
    cout<<"Light is turned OFF"<<endl<<endl;
}
