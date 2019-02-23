#include "Figures.h"
void Point2D::Set(double X0, double Y0)
{
    X = X0; Y = Y0; // Similar: this->X = X0; this->Y = Y0;
}
void Point2D::Move(double dX, double dY)
{
    X += dX; Y += dY;
}
void Point2D::Scale(double sX, double sY)
{
    X *= sX; Y *= sY;
}

const double PI = 3.14159;
void Circle::Set(double X0, double Y0, double r)
{
    Center.Set(X0, Y0); // call method of Point2D
    if (r < 0) r = 0;
    this->Radius = r; // similar Radius = r;
}
void Circle::Set(double r)
{
    if (r >= 0)
    {
        Radius = r;
    }
}
void Circle::Move(double dX, double dY)
{
    Center.Move(dX, dY); // call method of Point2D
}
double Circle::Area()
{
    return PI * Radius * Radius;
}
double Circle::Perimeter()
{
    return 2 * PI * Radius;
}

int main()
{
    {
        Point2D P;
        P.Set(7.2, 4.3);
        P.Move(2.7, 4.1);
    }
    Circle Cir;
    Cir.Set(0, 10, 20); // valid
    Cir.Set(-5); //valid: R still is 20
    Cir.Set(25); // R = 25
    return 0;
}
