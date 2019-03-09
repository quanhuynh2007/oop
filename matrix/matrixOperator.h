#ifndef _Matrix_h
#define _Matrix_h
#include "fractionOperator.h"

class Matrix
{
private:
    int numerator;
    int denominator;
public:
    Matrix();
    Matrix(int, int);
    float getF()
    {
        return ((float)numerator/denominator);
    }
    void compact();
    const Matrix operator+(const Matrix&) const;
    const Matrix operator*(const Matrix&) const;
    bool operator==(const Matrix&) const;

// operator overloading <<
friend ostream& operator<<(ostream &out, const Matrix& src);
};

#endif
