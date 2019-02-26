#include <iostream>
using namespace std;

void swapInt(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << endl << "examplePassByReference.cpp" << endl;
    int x =5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapInt(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}