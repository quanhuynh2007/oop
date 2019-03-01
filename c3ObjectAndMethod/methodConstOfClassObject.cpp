#include <iostream>
using namespace std;
class A
{
public:
    void test() {}
    void testConst() const {}
};

void doSomething(A a, const A& b)
{
    a.test(); // okay because a is normal
    a.testConst(); // okay because a is normal

    //b.test(); // ERROR, b IS ref const
    b.testConst(); // okay
};

int main()
{
    cout << endl << "cat methodConstOfClassObject.cpp" << endl;
    A a;
    doSomething(a, a);
    return 0;
}
