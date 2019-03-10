#include "matrixOperator.h"

int Matrix::inputMatrix(string fileName, char type)
{
    typePrint = type;
    ifstream fileInput(fileName);

    if (fileInput.fail())
    {
        cout << "Failed to open this file!" << std::endl;
        return -1;
    }
    fileInput >> rowNum;
    colNum = rowNum;
    ma.resize(rowNum);
    for (int i = 0; i < rowNum; i++)
    {
        ma[i].resize(colNum);
    }
    for(int i = 0; i < rowNum; i++)
    {
        for (int j = 0; j < colNum; j++)
        {
            fileInput >> ma[i][j];
        }
    }
    return 0;
}

const Matrix Matrix::operator+(const Matrix& src) const
{
    Matrix temp;
    temp.rowNum = rowNum;
    temp.colNum = colNum;
    temp.typePrint = typePrint;
    temp.ma.resize(rowNum);
    for (int i = 0; i < rowNum; i++)
    {
        temp.ma[i].resize(colNum);
        for (int j = 0; j < colNum; j++)
        {
            temp.ma[i][j] = ma[i][j] + src.ma[i][j];
        }
    }
    return temp;
}
const Matrix Matrix::operator*(const Fraction& src) const
{
    Matrix temp;
    temp.rowNum = rowNum;
    temp.colNum = colNum;
    temp.typePrint = typePrint;
    temp.ma.resize(rowNum);
    for (int i = 0; i < rowNum; i++)
    {
        temp.ma[i].resize(colNum);
        for (int j = 0; j < colNum; j++)
        {
            temp.ma[i][j] = ma[i][j] * src;
        }
    }
    return temp;
}

const Matrix Matrix::operator*(const Matrix& src) const
{
    // Asumption matrix is valid M * Rank
    Matrix temp;
    temp.rowNum = rowNum;
    temp.colNum = src.colNum;
    temp.typePrint = typePrint;
    temp.ma.resize(rowNum);
    Fraction buf(0, 1);
    for (int i = 0; i < rowNum; i++)
    {
        temp.ma[i].resize(temp.colNum);
        for (int j = 0; j < temp.colNum; j++)
        {
            temp.ma[i][j] = buf;
            for (int k = 0; k < temp.rowNum; k++)
            {
                temp.ma[i][j] = temp.ma[i][j] + ma[i][k] * src.ma[k][j];
                //cout << ma[i][k] << " * " << src.ma[k][j] << " ";
            }
            //cout << temp.ma[i][j] << endl;
        }
    }
    return temp;
}

// bool Matrix::operator==(const Matrix& src) const
// {
//     // assumption: after each calculate, Matrix is very simple
//     return (((numerator == src.numerator)) && ((denominator == src.denominator)));
// }

Matrix Matrix::createMatrixRank()
{
    Matrix temp;
    temp.rowNum = rowNum;
    temp.colNum = 1;
    temp.typePrint = typePrint;
    temp.ma.resize(rowNum);
    Fraction buf(1, rowNum);
    for (int i = 0; i < rowNum; i++)
    {
        temp.ma[i].resize(temp.colNum);
        for (int j = 0; j < temp.colNum; j++)
        {
            temp.ma[i][j] = buf;
        }
    }
    return temp;
}
Matrix Matrix::createMatrixE()
{
    Matrix temp;
    temp.rowNum = rowNum;
    temp.colNum = colNum;
    temp.typePrint = typePrint;
    temp.ma.resize(rowNum);
    Fraction buf(1, rowNum);
    for (int i = 0; i < rowNum; i++)
    {
        temp.ma[i].resize(colNum);
        for (int j = 0; j < colNum; j++)
        {
            temp.ma[i][j] = buf;
        }
    }
    return temp;
}

Matrix Matrix::createMatrixTrans()
{
    Matrix temp;
    temp.rowNum = colNum;
    temp.colNum = rowNum;
    temp.typePrint = typePrint;
    temp.ma.resize(temp.rowNum);
    for (int i = 0; i < temp.rowNum; i++)
    {
        temp.ma[i].resize(temp.colNum);
        for (int j = 0; j < temp.colNum; j++)
        {
            temp.ma[i][j] = ma[j][i];
        }
    }
    return temp;
}



// operator overloading <<
ostream& operator<<(ostream &out, const Matrix& src)
{
    for(int i = 0; i < src.rowNum; i++)
    {
        for (int j = 0; j < src.colNum; j++)
        {
            if (src.typePrint != 'f')
            {
                out << setw(12) << right ;
                out << src.ma[i][j].getF();
            }
            else
            {
                out << setw(12) << right;
                out << src.ma[i][j];
            }
        }
        // print FULL Fraction and Float
        if (src.typePrint == 'a')
        {
            out << setw(4) << right;
            out << "|";
            for (int j = 0; j < src.colNum; j++)
            {
                out << setw(12) << right ;
                out << src.ma[i][j];
            }
        }
        out << endl;
    }
    return out;
}

