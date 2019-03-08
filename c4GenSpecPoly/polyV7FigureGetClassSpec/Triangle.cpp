#include "Triangle.h"
Triangle::Triangle(float a, float h)
{
    basesize = a;   height = h;
    classNameStr = "Triangle";
}
void Triangle::Input(istream& inDev)
{
    inDev >> basesize >> height;
}
float Triangle::Area()
{
    return basesize * height / 2;
}
