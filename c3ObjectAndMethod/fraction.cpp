#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    void input(int, int);
    void output();
    Fraction();
    Fraction(int);
    Fraction(int, int);
};
Fraction::Fraction()
{
    numerator = 0;
    denominator = 0;
}

Fraction::Fraction(int num)
{
    numerator = num;
    denominator = 1;
}

Fraction::Fraction(int num, int den)
{
    if (den < 0)
    {
        num = -num;
        den = -den;
    }
    if (den == 0)
    {
        den = 1;
    }
    numerator = num;
    denominator = den;
}

int main()
{
    cout << endl << "fraction.cpp" << endl;
    Fraction a(2,3);
    Fraction b(5);
    Fraction c;
    c = 7;
    return 0;
}