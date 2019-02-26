#include <iostream>
#include <stdio.h>
#include <stdarg.h>
using namespace std;

void multiParam(int n ...)
{
    va_list dsParam;
    va_start(dsParam, n);
    cout << "Number param: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        int a = va_arg(dsParam, int);
        cout << "Param " << i + 1 << " = " << a << endl;
    }
}

int main()
{
    cout << endl << "exampleMultiParamNotKnowInMethod.cpp" << endl;
    int x = 3, k = 5, h = 7, z = 10;
    multiParam (4, x, k, h, z);
    multiParam(2, x, z);
    return 0;
}