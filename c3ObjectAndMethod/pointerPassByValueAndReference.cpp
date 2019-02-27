#include <iostream>
using namespace std;

void pointerValue(int* p)
{
    *p = 5;
    p = new int;
}

void pointerReference(int* &q)
{
    q = new int[3];
    q[0] = 10;
    q[1] = 7;
    q[2] = 4;
}

int main()
{
    cout << endl << "pointerPassByValueAndReference.cpp" << endl;
    int a = 9;
    int* pT = &a;
    *pT = 3; // a will change to 3
    cout << "(0) a = " << a << endl;
    cout << "(1) Pointer pT = " << pT << ", value *pT = " << *pT << endl;
    pointerValue(pT); // a = 5; pT not change, *pT change to 5 (=a)
    cout << "pointerValue" << endl;
    cout << "(0) a = " << a << endl;
    cout << "(1) Pointer pT = " << pT << ", value *pT = " << *pT << endl;

    cout << "pointerReference" << endl;
    pointerReference(pT); // pT will change, *pT also will change
    cout << "(0) a = " << a << endl;
    cout << "(1) Pointer pT = " << pT << ", value *pT = " << *pT << endl;
    cout << pT[0] << ", " << pT[1] << ", " << pT[2] << endl;

    delete[] pT;
    return 0;
}