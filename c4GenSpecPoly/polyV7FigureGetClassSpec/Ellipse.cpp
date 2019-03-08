#include "Ellipse.h"
Ellipse::Ellipse(float a, float b)
{
    Ra = a; Rb = b;
    classNameStr = "Ellipse";
}
void Ellipse::Input(istream& inDev)
{
    inDev >> Ra >> Rb;
}
float Ellipse::Area()
{
    return PI * Ra * Rb;
}
