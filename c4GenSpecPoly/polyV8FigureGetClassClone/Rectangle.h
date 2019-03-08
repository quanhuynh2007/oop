#ifndef _Rectangle_h
#define _Rectangle_h
#include "Figure.h"
class Rectangle: public Figure
{
protected:
    float width, height;
public:
    virtual const char* className()
    {
        return "Rectangle";
    }
    virtual Figure* CloneFigure()
    {
       return new Rectangle(*this);
    }
    Rectangle(float w = 0, float h = 0);
    virtual float Area();
    virtual void Input(istream& inDevice);
};
#endif
