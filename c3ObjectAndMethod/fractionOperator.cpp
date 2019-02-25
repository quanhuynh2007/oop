#include "fractionOperator.h"
Fraction::Fraction()
{
    numerator = 0;
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

Fraction& Fraction::operator+=(const Fraction& src)
{
    numerator = numerator * src.denominator + src.numerator * denominator;
    denominator = denominator * src.denominator;
    return *this;
}

const Fraction Fraction::operator+(const Fraction& src) const
{
    Fraction temp;
    temp.numerator = numerator * src.denominator + src.numerator * denominator;
    temp.denominator = denominator * src.denominator;
    return temp;
    // can implement by the other way, base operator +=
}

bool Fraction::operator==(const Fraction& src) const
{
    // assumption: after each calculate, Fraction is very simple
    return ((numerator == src.numerator) && (denominator == src.denominator));
}

Fraction& Fraction::operator++()     // before
{
    numerator = numerator + denominator;
    return *this;
}

Fraction Fraction::operator++(int)   // after
{
    Fraction temp = *this;
    ++(*this);
    return temp;
}

// operator overloading <<
ostream& operator<<(ostream &out, const Fraction& src)
{
    out << src.numerator << "/" << src.denominator;
    return out;
}