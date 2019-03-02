#include "complexNumberOperator.h"
Complex::Complex()
{
    a = 0;
    b = 0;
}
Complex::Complex(float a1, float b1)
{
    a = a1;
    b = b1;
}

const Complex Complex::operator+(const Complex& src) const
{
    Complex temp;
    temp.a = a + src.a;
    temp.b = b + src.b;
    return temp;
}

const Complex Complex::operator-(const Complex& src) const
{
    Complex temp;
    temp.a = a - src.a;
    temp.b = b - src.b;
    return temp;
}

const Complex Complex::operator*(const Complex& src) const
{
    Complex temp;
    temp.a = (a * src.a) - (b * src.b);
    temp.b = a * src.b + b * src.a;
    return temp;
}

const Complex Complex::operator/(const Complex& src) const
{
    // z = (a + b * i)/(src.a + src.b * i)
    // (srcZ = src.a - src.b * i)
    // src2 = src.a^2 + src.b^2
    //                          z * (src.a + src.b * i) = (a + b * i)
    // (src.a - src.b * i) *    z * (src.a + src.b * i) = (a + b * i) * srcZ
    // (src.a^2 + src.b^2) * z = (a + b * i) * srcZ = srcZZ

    Complex srcZ(src.a, 0 - src.b);
    float src2 = src.a * src.a + src.b * src.b;
    Complex srcZZ(a, b);
    srcZZ = srcZZ * srcZ;
    Complex temp;
    temp.a = srcZZ.a / src2;
    temp.b = srcZZ.b / src2;
    return temp;
}

bool Complex::operator==(const Complex& src) const
{
    // assumption: after each calculate, Complex is very simple
    return ((a == src.a) && (b == src.b));
}

bool Complex::operator!=(const Complex& src) const
{
    // assumption: after each calculate, Complex is very simple
    return ((a != src.a) || (b != src.b));
}


// operator overloading <<
ostream& operator<<(ostream &out, const Complex& src)
{
    out << src.a << " + " << src.b << "i" << endl;
    return out;
}
