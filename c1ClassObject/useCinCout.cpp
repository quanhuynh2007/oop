#include "Figures.h"
#include <iostream>
using namespace std;
void inputCircleData(istream& inDevice, Circle& cir)
{
    double X0, Y0, r;
    inDevice >> X0 >> Y0 >> r;
    cir.Set(X0, Y0, r);
}
void outputCircleData(ostream& outDevice, Circle& cir)
{
    outDevice << " + Area of circle = " << cir.Area() << endl;
    outDevice << " + Perimeter of circle = " << cir.Perimeter() << endl;
}
int main()
{
    Circle mycir;
    cout << "Input center and radius: ";
    inputCircleData(cin, mycir);
    outputCircleData(cout, mycir);
    cin.get();
    return 0;
}