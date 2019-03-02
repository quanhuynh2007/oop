#ifndef _COMPLEX_h
#define _COMPLEX_h

#include <iostream>
using namespace std;
// complex Number = a + bi
class Complex
{
private:
    float a;
    float b;
public:
    Complex();
    Complex(float, float);
    const Complex operator+(const Complex&) const;
    const Complex operator-(const Complex&) const;
    const Complex operator*(const Complex&) const;
    const Complex operator/(const Complex&) const;
    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;

// operator overloading <<
friend ostream& operator<<(ostream &out, const Complex& src);
};
#endif
