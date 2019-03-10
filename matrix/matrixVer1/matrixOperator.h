#ifndef _Matrix_h
#define _Matrix_h
#include "fractionOperator.h"

class Matrix
{
private:
    // Matrix mxn or mxm
    vector<vector<Fraction>> ma;
    int rowNum, colNum;
    char typePrint;
public:
    //Matrix();
    int inputMatrix(string fileName, char type);
    const Matrix operator+(const Matrix&) const;
    const Matrix operator*(const Fraction&) const;
    const Matrix operator*(const Matrix&) const;
//     bool operator==(const Matrix&) const;
    Matrix createMatrixRank();
    Matrix createMatrixE();
    Matrix createMatrixTrans();

// // operator overloading <<
friend ostream& operator<<(ostream &out, const Matrix& src);
};

#endif
