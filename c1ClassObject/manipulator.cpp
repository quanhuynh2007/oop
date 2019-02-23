// page 32: manipulator : toan tu dinh dang
#include <iostream>
#include <iomanip> // using manipulator
using namespace std;

const double PI = 3.14159;
int main()
{
    int Num = 0x4F3E; //20286
    cout << setw(25) << right;
    cout << "Num (decimal) = " << Num << endl;

    cout << setw(25) << right;
    cout << "Num (hexa decimal) = " << hex << Num << endl;

    cout << setw(25) << right;
    cout << "Num (octal) = " << oct << Num << endl;

    cout << setw(25) << left;
    cout << "Num (decimal) = " << Num << endl;

    cout << setw(25) << left;
    cout << "Num (hexa decimal) = " << hex << Num << endl;

    cout << setw(25) << left;
    cout << "Num (octal) = " << oct << Num << endl;

    cout << setw(25)  << setfill('.') << left;
    cout << "Num (decimal) = " << Num << endl;

    cout << setw(25) << left;
    cout << "Num (hexa decimal) = " << hex << Num << endl;

    cout << setw(25) << left;
    cout << "Num (octal) = " << oct << Num << endl;

    cout << setw(25);
    cout << "Num (decimal) = " << Num << endl;

    cout << setw(25);
    cout << "Num (hexa decimal) = " << hex << Num << endl;

    cout << setw(25);
    cout << "Num (octal) = " << oct << Num << endl;

    cout << setw(25) << right << setprecision(10);
    cout << PI << endl;

    cout << setw(25) << right << setprecision(20);
    cout << PI << endl;
    cin.get();
    return 0;
}

// Result when compile:
/*
         Num (decimal) = 20286
    Num (hexa decimal) = 4f3e
           Num (octal) = 47476
Num (decimal) =          47476
Num (hexa decimal) =     4f3e
Num (octal) =            47476
Num (decimal) = .........47476
Num (hexa decimal) = ....4f3e
Num (octal) = ...........47476
Num (decimal) = .........47476
Num (hexa decimal) = ....4f3e
Num (octal) = ...........47476
..................3.14159
....3.1415899999999998826
*/