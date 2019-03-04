#include "Triangle.h"
Triangle::Triangle(float a, float h)
{
    basesize = 0;   height = h;
}
void Triangle::Input(istream& inDev)
{
    inDev >> basesize >> height;
}
float Triangle::Area()
{
    return basesize * height / 2;
}
