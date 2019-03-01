#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int den)
    {
        numerator = num;
        denominator = den;
    }
    operator int() const
    {
        return numerator/denominator;
    }
};

int main()
{
    cout << endl << "methodOperatorUsingCast.cpp" << endl;
    Fraction fr(6, 5);
    int t1 = fr;
    int t2 = int (fr);
    int t3 = (int) fr;
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    return 0;
}
