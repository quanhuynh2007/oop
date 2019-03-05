#ifndef _ELLIPSE_H
#define _ELLIPSE_H
#define PI (float)3.14159
#include "Figure.h"

class Ellipse : public Figure
{
protected:
    float Ra, Rb;
public:
     Ellipse(float a = 0, float b = 0);
     virtual void Input(istream& inDev);
     virtual float Area();
};
#endif
