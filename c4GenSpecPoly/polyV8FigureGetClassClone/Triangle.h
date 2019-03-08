#ifndef _Triangle_h
#define _Triangle_h
#include "Figure.h"
class Triangle: public Figure
{
protected:
    float basesize, height;
public:
    virtual const char* className()
    {
        return "Triangle";
    }
    virtual Figure* CloneFigure()
    {
       return new Triangle(*this);
    }
    Triangle(float a = 0, float h = 0);
    virtual float Area();
    virtual void Input(istream& inDev);
};
#endif
