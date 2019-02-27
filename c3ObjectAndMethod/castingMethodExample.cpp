#include <iostream>
using namespace std;

// 2.2
    class parent{};
    class child: public parent{};

// 2.3
    class parentDynamic
    {
    public:
        virtual void methodPoly(){};
    };
    class childDynamic: public parentDynamic{};

// 2.4
    class constA
    {
        public:
            void doSomething(){};
    };
    void testA(const constA& a)
    {
        //a.doSomething(); // error, because method is non-const
        constA* b;
        b = const_cast<constA*> (&a);
        b->doSomething(); // okay
    }

// 2.5
    class reinterpretA{};
    class reinterpretB{};



int main()
{
    cout << endl << "cat castingMethodExample.cpp" << endl;

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
        parentDynamic* pa = new parentDynamic();
        childDynamic* pb = dynamic_cast<childDynamic*> (pa);
    }
    {
        cout << "2.4 const_cast (Ép kiểu hằng)" << endl;
        parentDynamic* pa = new parentDynamic();
        childDynamic* pb = dynamic_cast<childDynamic*> (pa);
    }
    {
        cout << "2.5 reinterpret_cast (Ép kiểu dịch lại)" << endl;
        reinterpretA* pA = new reinterpretA();
        reinterpretB* pB = reinterpret_cast<reinterpretB*> (pA);
    }

    return 0;
}
