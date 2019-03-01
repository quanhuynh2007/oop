#include <iostream>
using namespace std;
class B
{
public:
    B()
    {
        cout << "Constructor B" << endl;
    }
    ~B()
    {
        cout << "Deconstructor B" << endl;
    }
};

class A
{
private:
    B b;
public:
    A()
    {
        cout << "Constructor A" << endl;
    }
    ~A()
    {
        cout << "Deconstructor A" << endl;
    }
};

int main()
{
    cout << endl << "staticDataMemberClassObject.cpp" << endl;
    A a;
    return 0;
}
