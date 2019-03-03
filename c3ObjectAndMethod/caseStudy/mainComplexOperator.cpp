#include "complexNumberOperator.h"

int main()
{
    cout << endl << "mainComplexOperator.cpp + complexNumberOperator.cpp + complexNumberOperator.h" << endl;
    Complex a(1,3), b(2,5);
    Complex c = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a == b ? " << ((a == b)?"TRUE":"FALSE") << endl;
    cout << "a != b ? " << ((a != b)?"TRUE":"FALSE") << endl;
    cout << "a == c ? " << ((a == c)?"TRUE":"FALSE") << endl;
    return 0;
}
