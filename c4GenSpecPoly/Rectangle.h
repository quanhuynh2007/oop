#ifndef _Rectangle_h
#define _Rectangle_h
#include <iostream>
using namespace std;
class Rectangle
{
protected:
    float width, height;
public:
    Rectangle(float w, float h);
    float Area();
    virtual void Input(istream& inDevice);
};
#endif
