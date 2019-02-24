#include "Circle.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    Circle mycir; double r = 10;
    mycir.Set(r);
    cout << "R = " << r << endl;
    cout << "Area = " << mycir.Area() << endl;
    cout << "Perimeter = " << mycir.Perimeter() << endl;
    cin.get();
    return 0;
}