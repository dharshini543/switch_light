#include "Switch.h"
#include<iostream>
using namespace std;

Switch::Switch()
{
    cout<< "Switch constructor"<<endl;
}

void Switch::initWire(Wire* wire)
{
    m_wire = wire;
}

Switch::~Switch()
{
    cout<< "Switch Destructor"<<endl;
}

void Switch::turnOnSwitch()
{
    cout<<"Switch is turned On"<<endl;
    m_wire->turnOnWire();

}
void Switch::turnOffSwitch()
{
    cout<<"Switch is turned OFF"<<endl;
    m_wire->turnOffWire();
}
