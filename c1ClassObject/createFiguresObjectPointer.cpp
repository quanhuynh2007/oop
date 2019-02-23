#include "Figures.h"
#include <iostream>
using namespace std;
int main()
{
    Circle* mycir; // still not yet object
    mycir = new Circle();
    if (mycir)
    {
        mycir->Set(20, 20, 100);
        double mArea = mycir->Area();
        cout << "Area of circle = " << mArea;
        delete mycir; // remove object
        cin.get();
    }
    return 0;
}