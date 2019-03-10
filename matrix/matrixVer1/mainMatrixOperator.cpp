#include "matrixOperator.h"

int main(int argc, char* args[])
{
    cout << endl << "mainMatrixOperator.cpp + fractionOperator.cpp + matrixOperator.cpp" << endl;
    char type = ' '; // default : float
    if (argc >= 2)
    {
        type = args[1][0];
    }
    Matrix matrixM;
    Matrix matrixMbeta;
    Matrix matrixA;
    Matrix matrixD;
    Matrix matrixAD;
    Matrix matrixADanpha;
    Matrix matrixE;
    Matrix matrixEgama;
    Matrix matrixResultTemp;
    Matrix matrixTranspose;
    Matrix matrixRank;


    string inputM = "inputM.txt";
    string inputA = "inputA.txt";
    string inputD = "inputD.txt";
    Fraction anpha(3, 4); // 0.75 * AD
    Fraction beta(3, 20); // 0.15 * M
    Fraction gama(1, 10); // 0.1 * E

    matrixM.inputMatrix(inputM, type);
    cout << "Matrix M (ma trận cụm (inter-level proximity matrix)" << endl << matrixM << endl;
    matrixMbeta = matrixM * beta;
    cout << "Matrix M * " << beta.getF() << " (" << beta << ")" << endl << matrixMbeta << endl;

    matrixA.inputMatrix(inputA, type);
    cout << "Matrix A (connectivity ( kết nối))" << endl << matrixA << endl;

    matrixD.inputMatrix(inputD, type);
    cout << "Matrix D (dangling)" << endl << matrixD << endl;

    matrixAD = matrixA + matrixD;
    cout << "Matrix AD = A + D" << endl << matrixAD << endl;
    matrixADanpha = matrixAD * anpha;
    cout << "Matrix AD * " << anpha.getF() << " (" << anpha << ")" << endl << matrixADanpha << endl;

    matrixE = matrixM.createMatrixE();
    //cout << "Matrix E" << endl << matrixE << endl;
    matrixEgama = matrixE * gama;
    cout << "Matrix E * " << gama.getF() << " (" << gama << ")" << endl << matrixEgama << endl;

    matrixResultTemp = matrixADanpha + matrixMbeta + matrixEgama;
    cout << "matrixResultTemp = ";
    cout << anpha.getF() << "*(A + D) + " << beta.getF() << "*M + " << gama.getF() << "*E)" << endl << matrixResultTemp << endl;

    cout << "---------------------------------Result---------------------------------" << endl;
    matrixTranspose = matrixResultTemp.createMatrixTrans();
    cout << "matrixTranspose = transpose(matrixResultTemp)" << endl << matrixTranspose << endl;

    matrixRank = matrixM.createMatrixRank();
    cout << "Matrix Rank initialize " << endl << matrixRank << endl;
    cout << "---------------------------------Rank Calculate---------------------------------" << endl;

    for (int i = 0; i < 6; i++) // Max 6 time
    {
        cout << "Time " << (i + 1) << endl;
        matrixRank = matrixTranspose * matrixRank;
        cout << matrixRank << endl;
    }

    return 0;
}
