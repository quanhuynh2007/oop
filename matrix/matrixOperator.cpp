#include "matrixOperator.h"
Matrix::Matrix()
{
    numerator = 0;
    denominator = 1;
}
Matrix::Matrix(int num, int den)
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
void Matrix::compact()
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

const Matrix Matrix::operator+(const Matrix& src) const
{
    Matrix temp;
    temp.numerator = numerator * src.denominator + src.numerator * denominator;
    temp.denominator = denominator * src.denominator;
    temp.compact();
    return temp;
}

const Matrix Matrix::operator*(const Matrix& src) const
{
    Matrix temp;
    temp.numerator = numerator * src.numerator;
    temp.denominator = denominator * src.denominator;
    temp.compact();
    return temp;
}

bool Matrix::operator==(const Matrix& src) const
{
    // assumption: after each calculate, Matrix is very simple
    return (((numerator == src.numerator)) && ((denominator == src.denominator)));
}

// operator overloading <<
ostream& operator<<(ostream &out, const Matrix& src)
{
    out << src.numerator;
    if (src.denominator != 1)
    {
        out << "/" << src.denominator;
    }
    return out;
}
