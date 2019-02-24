#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << endl << "arrayVectorPushBack.cpp" << endl;
    int n; vector<float> a; float temp;
    cout << "Enter array size: ";
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid size!";
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> temp;
        a.push_back(temp);
    }
    cout << "Data: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}