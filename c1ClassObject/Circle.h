#ifndef _CIRCLE_H
#define _CIRCLE_H
class Circle
{
    Point2D Center;
    double Radius;
public:
    void Set(double X, double Y, double r);
    void Set(double r);
    double Area();
    double Perimeter();
};

#endif