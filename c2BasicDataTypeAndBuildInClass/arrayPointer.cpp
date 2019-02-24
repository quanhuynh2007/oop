#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << endl << "arrayPointer.cpp" << endl;
    int n; float* a;
    cout << "Enter array size: ";
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid size!";
        return -1;
    }
    a = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Data: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;
    cout << endl;
    return 0;
}