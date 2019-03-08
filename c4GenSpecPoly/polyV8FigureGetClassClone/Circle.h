#ifndef _CIRCLE_
#define _CIRCLE_
#include "Ellipse.h"
class Circle: public Ellipse
{
public:
    virtual const char* className()
    {
        return "Circle";
    }
    virtual Figure* CloneFigure()
    {
       return new Circle(*this);
    }
    Circle(float r = 0);
    virtual void Input(istream& inDev);
};
#endif
