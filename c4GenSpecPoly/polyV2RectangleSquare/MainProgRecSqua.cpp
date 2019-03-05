#include "Rectangle.h"
#include "Square.h"
int main()
{
    cout << endl << "c4GenSpecPoly_v2 Not Poly cin MainProgRecSqua.cpp Rectangle.cpp Square.cpp" << endl;

    Rectangle *pRec;
    Rectangle Rec;
    Square Sq;

    pRec = &Rec;
    cout << "Rectangle's size: ";
    pRec->Input(cin); // Not poly
    cout << "Rectangle's area = " << pRec->Area() << endl;

    pRec = &Sq;
    cout << "Square's size: ";
    pRec->Input(cin); // Not poly FAIL
    cout << "Square's area = " << pRec->Area() << endl;
    cout << "Fail because calculate follow Rectangle's area()" << endl;
    return 0;
}
