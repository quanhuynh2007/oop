#include "matrixOperator.h"

int main(int argc, char* args[])
{
    cout << endl << "mainMatrixOperator.cpp + fractionOperator.cpp + matrixOperator.cpp" << endl;
    string input1 = "inputM.txt";
    string input2 = "inputN.txt";
    Matrix matrix1;
    Matrix matrix2;
    Matrix matrix;
    char type = ' '; // default : Fracion
    if (argc >= 2)
    {
        type = args[1][0];
    }
    cout << "type = " << type << endl;
    matrix1.inputMatrix(input1, type);
    cout << matrix1 << endl;

    matrix2.inputMatrix(input2, type);
    //cout << matrix2 << endl;

    Fraction anpha(3, 4);
    matrix = matrix1;
    matrix1 = matrix1 * anpha;
    //cout << matrix << endl;

    Matrix matrixRank = matrix.createMatrixRank();
    cout << "Matrix Rank: " << endl << matrixRank << endl;
    matrixRank = matrix * matrixRank;
    cout << "Matrix Rank 2: " << endl << matrixRank << endl;
    matrix = matrix.createMatrixTrans();
    cout << "Matrix Rank 3: " << endl << matrix << endl;
    Matrix matrixE = matrix.createMatrixE();
    cout << "Matrix E: " << endl << matrixE << endl;

    return 0;
}
