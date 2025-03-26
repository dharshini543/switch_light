#ifndef LIGHT_H
#define LIGHT_H
#include"Wire.h"

class Light
{
private:
    int m_Lightnum;
    Wire* m_wire;

public:
    Light(int Lightnum);
    void turnOnLight();
    void turnOffLight();
    void initWire(Wire* wire);
    ~Light();
};


#endif // LIGHT_H
