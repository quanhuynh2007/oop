#include "Figures.h"
#include <iostream>
using namespace std;

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

int main()
{
    Circle mycir;
    cout << "Input center and radius: ";
    cin >> mycir;
    cout << mycir;
    cin.get();
    return 0;
}