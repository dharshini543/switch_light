#ifndef SWITCH_H
#define SWITCH_H
#include"Wire.h"
class Switch
{
private:
    Wire* m_wire;

public:
    Switch();
    void turnOnSwitch();
    void turnOffSwitch();
    void initWire(Wire* w1);
    ~Switch();
};
#endif // SWITCH_H



