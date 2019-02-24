#include "Circle.h"
const double PI = 3.14159;
void Circle::Set(double X0, double Y0, double r)
{
    Center.Set(X0, Y0);
    Set(r);
}
void Circle::Set(double r)
{
    if (r >= 0)
    {
        Radius = r;
    }
    else
    {
        Radius = 0;
    }
}
void Circle::Move(double dX, double dY)
{
    Center.Move(dX, dY);
}
double Circle::Area()
{
    return PI * Radius * Radius;
}
double Circle::Perimeter()
{
    return 2 * PI * Radius;
}