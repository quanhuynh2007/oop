#include "Figures.h"
#include <iostream>
using namespace std;
int main()
{
    Circle mycir; // auto create

    mycir.Set(20, 20, 100);
    double mArea = mycir.Area();
    cout << "Area of circle = " << mArea;
    // No need to delete object
    cin.get();
    return 0;
}