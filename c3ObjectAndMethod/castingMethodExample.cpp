#include <iostream>
using namespace std;

// 2.2
        class parent{};
        class child: public parent{};

int main()
{
    cout << endl << "castingMethodExample.cpp" << endl;

    cout << "1. implicit casting (Ép kiểu ngầm định)" << endl;
    {
        short a = 100;
        int b = a; // implicit casting from short to int
    }

    cout << "2. Explicit casting (Ép kiểu chỉ định): 5 types" << endl;
    {
        cout << "2.1 C-style casting (Ép kiểu theo chuẩn C)" << endl;
        float a = 10.5;
        int b = (int) a; // int b = int(a) , still okay.
        cout << "2.1 " << b << endl;
    }
    {
        cout << "2.2 static_cast (Ép kiểu tĩnh)" << endl;
        float a = 7.2;
        int b = static_cast<int> (a);
        cout << "2.2 " << b << endl;
        parent* pa = new parent();
        child* pb = static_cast<child*> (pa);
    }
    {
        cout << "2.3 dynamic_cast (Ép kiểu động)" << endl;
        // to be continue
    }

    return 0;
}