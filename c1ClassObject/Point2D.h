#ifndef _POINT2D_H
#define _POINT2D_H
class Point2D
{
    double X, Y;
public:
    void Set(double X0, double Y0);
    void Move(double dX, double dY);
    void Scale(double sX, double sY);
};

#endif