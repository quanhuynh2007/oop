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
        den = 1; num = 0;
    }
    numerator = num;
    denominator = den;
    compact();
}
void Fraction::compact()
{
    if (denominator == 0)
    {
        cout << "denominator = 0!!!" << endl;
        numerator = 0;
        denominator = 1;
        return;
    }
    int num = abs(numerator);
    int den = abs(denominator);
    int rec = 0;
    while (den != 0)
    {
        rec = num % den;
        num = den;
        den = rec;
    }
    //
    numerator = (int)numerator/num;
    denominator = (int)denominator/num;

    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
}

const Fraction Fraction::operator+(const Fraction& src) const
{
    Fraction temp;
    temp.numerator = numerator * src.denominator + src.numerator * denominator;
    temp.denominator = denominator * src.denominator;
    temp.compact();
    return temp;
}

const Fraction Fraction::operator*(const Fraction& src) const
{
    Fraction temp;
    temp.numerator = numerator * src.numerator;
    temp.denominator = denominator * src.denominator;
    temp.compact();
    return temp;
}

bool Fraction::operator==(const Fraction& src) const
{
    // assumption: after each calculate, Fraction is very simple
    return (((numerator == src.numerator)) && ((denominator == src.denominator)));
}

// operator overloading <<
ostream& operator<<(ostream &out, const Fraction& src)
{
    out << src.numerator;
    if (src.denominator != 1)
    {
        out << "/" << src.denominator;
    }
    return out;
}

istream& operator>> (istream &is, Fraction& src)
{
    string buf;
    fflush(stdin); // remove cache
    is >> buf;
    int pos = buf.find('/'); // Fraction
    int num, den;
    if (pos > 0)
    {
        num = stoi(buf.substr(0, pos));
        den = stoi(buf.substr(pos + 1, buf.length() - pos));
    }
    else
    {
        pos = buf.find('.'); // Float
        if (pos > 0)
        {
            den = stoi(buf.substr(pos + 1, buf.length() - pos));
            num = stoi(buf.substr(0, pos)) * pow(10, buf.length() - 2) + den;
            den = pow(10, buf.length() - 2);
        }
        else
        {
            num = stoi(buf);
            den = 1;
        }
    }
    src.numerator = num;
    src.denominator = den;
    src.compact();
    return is;
}
