#include <iostream>
using namespace std;
class MyIntArray
{
private:
    int* pArr;
    int size;
public:
    ~MyIntArray();
    MyIntArray(int sz);
    MyIntArray& operator=(const MyIntArray&);
};
MyIntArray::~MyIntArray()
{
    if (size > 0)
    {
        size = 0;
        delete[] pArr;
        pArr = NULL;
    }
}
MyIntArray::MyIntArray(int sz)
{
    if (sz <= 0)
    {
        sz = 0; pArr = NULL; return;
    }
    size = sz;
    pArr = new int[size];
    for (int i = 0; i < size; i++)
        pArr[i] = 0;
}

MyIntArray& MyIntArray::operator=(const MyIntArray& src)
{
    if (this != &src)
    {
        delete[] pArr;
        size = src.size;
        pArr = new int[size];
        for (int i = 0; i < size; i++)
        {
            pArr[i] = src.pArr[i];
        }
    }
    return *this;
}

int main()
{
    cout << endl << "operatorOverloading.cpp" << endl;
    MyIntArray a(10);
    MyIntArray *b = new MyIntArray(20);
    delete b;

    return 0;
}
