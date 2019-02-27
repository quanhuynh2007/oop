#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int);
};
Fraction::Fraction(int num)
{
    numerator = num;
    denominator = 1;
}

int main()
{
    cout << endl << "methodCreateUsingCast.cpp" << endl;
    int num = 5;
    Fraction fr = num;
    return 0;
}
