#include "FigIO.h"
istream& operator >> (istream& inDevice, Circle& cir)
{
    double X0, Y0, r;
    inDevice >> X0 >> Y0 >> r;
    cir.Set(X0, Y0, r);
    return inDevice;
}
ostream& operator << (ostream& outDevice, Circle& cir)
{
    outDevice << " + Area of circle = " << cir.Area() << endl;
    outDevice << " + Perimeter of circle = " << cir.Perimeter() << endl;
    return outDevice;
}