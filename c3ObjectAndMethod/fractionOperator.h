#ifndef _Fraction_h
#define _Fraction_h

#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int, int);
    Fraction& operator+=(const Fraction&);
    const Fraction operator+(const Fraction&) const;
    bool operator==(const Fraction&) const;
    Fraction& operator++();     // before
    Fraction operator++(int);   // after

// operator overloading <<
friend ostream& operator<<(ostream &out, const Fraction& src);
};
#endif