#include "fractionOperator.h"

int main()
{
    cout << endl << "mainFractionOperator.cpp + fractionOperator.cpp + fractionOperator.h" << endl;
    Fraction a(1, -3), b(0, 6), c(6, 2);
    cout << "c = " << c << endl;
    c = a + b;
    cout << "c = " << c << ", float = " << c.getF() << endl;
    cout << "a = " << a << ", float = " << a.getF() << endl;
    cout << "b = " << b << ", float = " << b.getF() << endl;
    Fraction d(-2, 6);
    cout << "d = " << d << ", float = " << d.getF() << endl;
    cout << "a * b = " << a*b << endl;
    bool check = (a == c);
    cout << "check a == c = " << check << endl;
    check = (a == d);
    cout << "check a == d = " << check << endl;
    Fraction test;
    cin >> test;
    cout << test;
    return 0;
}
