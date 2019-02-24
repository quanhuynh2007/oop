#include <iostream>
using namespace std;
class MyIntArray
{
private:
    int* pArr;
    int size;
public:
    MyIntArray(int); // allocate, init pArr with value = 0
    MyIntArray(const MyIntArray&);
    void update(int, int);
    int get(int);
};
MyIntArray::MyIntArray(int sz)
{
    size = sz;
    pArr = new int[size];
    for (int i = 0; i < size; i++)
        pArr[i] = 0;
}
MyIntArray::MyIntArray(const MyIntArray& src)
{
    size = src.size;
    pArr = new int[size];
    for (int i = 0; i < size; i++)
        pArr[i] = src.pArr[i];
}
void MyIntArray::update(int k, int val)
{
    pArr[k] = val;
}
int MyIntArray::get(int k)
{
    return pArr[k];
}
int main()
{
    cout << endl << "problemWhenNotSetupConstructorCopyFix.cpp" << endl;
    MyIntArray a(10);
    MyIntArray b(a);

    cout << b.get(3) << endl;
    cout << a.get(3) << endl;
    a.update(3, 10); // a[3] = 10, effect b[3] ===> This is problem
    cout << b.get(3) << endl;
    cout << a.get(3) << endl;
    return 0;
}
