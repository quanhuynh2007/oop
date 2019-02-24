#include "Point2D.h"

void Point2D::Set(double X0, double Y0)
{
    X = X0; Y = Y0;
}
void Point2D::Move(double dX, double dY)
{
    X += dX; Y += dY;
}
void Point2D::Scale(double sX, double sY)
{
    X *= sX; Y *= sY;
}