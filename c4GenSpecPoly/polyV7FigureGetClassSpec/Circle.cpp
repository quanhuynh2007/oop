#include "Circle.h"
Circle::Circle(float r): Ellipse(r, r)
{
    classNameStr = "Circle";
}

void Circle::Input(istream& inDev)
{
    inDev >> Ra;
    Rb = Ra;
}
