#ifndef WIRE_H
#define WIRE_H
#include<vector>
using namespace std;

class Light;
class Wire
{
protected:
    vector<Light*> m_connectedLights;
    Light* m_light;

public:
    Wire();
    void turnOnWire();
    void turnOffWire();
    void initLight(Light* light);
    ~Wire();
};

#endif // WIRE_H

