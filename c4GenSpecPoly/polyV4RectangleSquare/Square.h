#ifndef _Square_h
#define _Square_h
#include "Rectangle.h"

class Square : public Rectangle
{
public:
    Square(float a = 0);
    virtual void Input(istream& inDevice);
};

#endif
