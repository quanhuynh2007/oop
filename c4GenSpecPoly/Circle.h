#ifndef _CIRCLE_
#define _CIRCLE_
#include "Ellipse.h"
class Circle: public Ellipse
{
public:
    Circle(float r = 0);
    virtual void Input(istream& inDev);
};
#endif
