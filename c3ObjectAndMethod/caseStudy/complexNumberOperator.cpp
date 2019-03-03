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

const Complex Complex::operator+(const Complex& t) const
{
    Complex z(a + t.a, b + t.b);
    return z;
}

const Complex Complex::operator-(const Complex& t) const
{
    Complex z(a - t.a, b - t.b);
    return z;
}

const Complex Complex::operator*(const Complex& t) const
{
    Complex z;
    z.a = (a * t.a) - (b * t.b);
    z.b = a * t.b + b * t.a;
    return z;
}

const Complex Complex::operator/(const Complex& t) const
{
    // z = this/t; this = (a + b * i); t = t.a + t.b * i;
    // => T = t.a - t.b * i; (Complex)

    // tT = t*T = t.a^2 + t.b^2
    // => tT = t.a * t.a + t.b * t.b; (float)

    //      z * t = this
    // T *  z * t = this * T
    // tT * z = this * T = thisT
    // z = thisT/tT;
    // => thisT = this * T; (Complex)
    // => z = thisT.a/tT + thisT.b/tT;

    // if (t == 0)
    // {
    //     cout << "Error divide 0!!!" << endl;
    //     return Complex();
    // }


    Complex T(t.a, 0 - t.b);
    float tT = t.a * t.a + t.b * t.b;
    Complex thisT;
    thisT = *this * T;
    Complex z (thisT.a/tT, thisT.b/tT);
    return z;
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
