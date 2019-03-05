#include "Circle.h"
Circle::Circle(float r): Ellipse(r, r) {}

void Circle::Input(istream& inDev)
{
    inDev >> Ra;
    Rb = Ra;
}
