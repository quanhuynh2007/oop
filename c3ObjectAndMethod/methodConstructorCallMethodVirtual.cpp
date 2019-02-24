#include <iostream>
using namespace std;
class classA
{
public:
    classA();
    virtual void logging(); // method virtual
};

class classB: public classA
{
public:
    classB() {}
    void logging();
};

classA::classA() // method constructor default for classA
{
    logging(); // method constructor call to method virtual
}

void classA::logging() // method logging for classA
{
    cout << "Method logging of classA" << endl;
}

void classB::logging()
{
    cout << "Method logging of classB" << endl;
}

int main()
{
    cout << endl << "methodConstructorCallMethodVirtual.cpp" << endl;
    classB b;
    return 0;
}