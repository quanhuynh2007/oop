#include "Rectangle.h"
#include "Square.h"
int main()
{
    cout << endl << "cat MainProgRecSquaPolyv1.cpp Rectangle.cpp Square.cpp" << endl;

    Rectangle *pRec;
    Rectangle Rec;
    Square Sq;

    pRec = &Rec;
    cout << "Rectangle's size: ";
    pRec->Input(cin);
    cout << "Rectangle's area = " << pRec->Area() << endl;

    pRec = &Sq;
    cout << "Square's size: ";
    pRec->Input(cin);
    cout << "Square's area = " << pRec->Area() << endl;
    return 0;
}
