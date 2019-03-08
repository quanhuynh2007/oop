#ifndef _Square_h
#define _Square_h
#include "Rectangle.h"

class Square : public Rectangle
{
public:
    virtual const char* className()
    {
        return "Square";
    }
    virtual Figure* CloneFigure()
    {
       return new Square(*this);
    }
    Square(float a = 0);
    virtual void Input(istream& inDevice);
};

#endif
