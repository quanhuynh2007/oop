#include <iostream>
#include <vector>

using namespace std;
istream& operator >> (istream& iDev, vector<float> &a)
{
    float temp;
    a.resize(0);
    // While not end of file or string data
    while (iDev >> temp)
    {
        a.push_back(temp);
    }
    return iDev;
}
ostream& operator << (ostream& oDev, vector<float> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        oDev << a[i] << " ";
    }
    return oDev;
}
int main()
{
    cout << endl << "arrayVectorPushBackAdvanceOperator.cpp" << endl;
    vector<float> a;
    cout << "Input (Ctrl + X; Enter to exit): ";
    cin >> a;
    cout << "Result: ";
    cout << a;
    cout << endl;
    return 0;
}