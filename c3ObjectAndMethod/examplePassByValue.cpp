#include <iostream>
using namespace std;
// 1 + 2 + ... + n
long calculateSum(int x)
{
    long sum = 0;
    while (x > 0)
    {
        sum += x;
        --x;
    }
    return sum;
}

int main()
{
    cout << endl << "examplePassByValue.cpp" << endl;
    int n = 10;
    cout << calculateSum(10) << endl;
    cout << n << endl;
    return 0;
}