#include "Rectangle.h"
#include "Square.h"
int main()
{
    Rectangle Rec;
    Square Sq;

    cout << endl << "cat MainProgRecSqua.cpp Rectangle.cpp Square.cpp" << endl;
    Rec.Input(cin);
    cout << "Rectangle's area = " << Rec.Area() << endl;

    cout << "Square's size: ";
    Sq.Input(cin);
    cout << "Square's area = " << Sq.Area() << endl;
    return 0;
}
