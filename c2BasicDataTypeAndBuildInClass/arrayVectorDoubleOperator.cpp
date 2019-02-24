#include <iostream>
#include <vector>
using namespace std;
typedef vector<double> doubleArray;
void matrixInit(vector<doubleArray>& a, int n)
{
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        a[i].resize(n);
    }
}
istream& operator >> (istream& iDev, vector<doubleArray> &a)
{
    int n; iDev >> n;
    matrixInit(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
            if (iDev)
            {
                iDev >> a[i][j];
            }
        }
    }
    return iDev;
}
ostream& operator << (ostream& oDev, vector<doubleArray> &a)
{
    oDev << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            oDev << a[i][j] << " ";
        }
        oDev << endl;
    }
    return oDev;
}
int main()
{
    cout << endl << "arrayVectorDoubleOperator.cpp" << endl;
    vector<doubleArray> a;
    cout << "Input vector double:" << endl;;
    cin >> a;
    cout << "Result: ";
    cout << a;
    cout << endl;
    return 0;
}