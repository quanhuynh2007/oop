#ifndef _Rectangle_h
#define _Rectangle_h
#include "Figure.h"

class Rectangle : public Figure
{
protected:
    float width, height;
public:
    Rectangle(float w, float h);
    virtual float Area();
    virtual void Input(istream& inDevice);
};
#endif
