#include <iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A(int k)
    {
        x = k;
    }
    void getInfo() // support test
    {
        cout << "x = " << x << endl;
    }
};

class Test
{
private:
    const int k;
    A& refA;
    A a;
public:
    Test(int t, A& src) : k(t), refA(src), a(t)
    {

    }
    void getInfo() // support test
    {
        cout << "k = " << k << endl;
        a.getInfo();
    }
};

int main()
{
    cout << endl << "listConstructorforClassObject.cpp" << endl;
    A y(5); // y.x = 5;
    y.getInfo();
    Test ob(3, y); // ob.k = 3; ob.a.x = 3;
    ob.getInfo();

    return 0;
}
