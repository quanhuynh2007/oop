#include "complexNumberOperator.h"

int main()
{
    cout << endl << " mainComplexOperator.cpp + complexNumberOperator.cpp + complexNumberOperator.h" << endl;
    Complex a(1,3), b(2,5);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a == b ?" << (a == b) << endl;
    cout << "a != b ? " << (a != b) << endl;
    return 0;
}
