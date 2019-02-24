#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Point2D.h"
class Circle
{
    Point2D Center;
    double Radius;
public:
    void Set(double X, double Y, double r);
    void Set(double r);
    void Move(double dX, double dY);
    double Area();
    double Perimeter();
};

#endif