#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip> 
using namespace std;

int main()
{
    ifstream fileInput("input1.txt");

    if (fileInput.fail())
    {
        cout << "Failed to open this file!" << std::endl;
        return -1;
    }
    int n;
    fileInput >> n;
    vector<vector<float>> a;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        a[i].resize(n);
    }
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            float buf;
            fileInput >> buf;
            a[j][i] = buf;
        }
    }

    // Print matrix test
    cout << "Matrix A" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    std::cout << std::endl;
    /////////////////////////////////////////////
    vector<float> b;
    b.resize(n);
    cout << "Vector B" << endl;
    for (int i = 0; i < n; i++)
    {
        b[i] = 1.0/n;
        cout << b[i] << endl;
    }
    //
    cout << endl << "A x B" << endl;
    vector<float> ab;
    ab.resize(n);
    for (int k = 0; k < 500; k++)
    {
        for (int i = 0; i < n; i++)
        {
            ab[i] = 0;
            for(int j = 0; j < n; j++)
            {
                ab[i] += a[i][j]*b[j];
            }
        }
        // back : b = ab;
        for (int i = 0; i < n; i++)
        {
            b[i] = ab[i];
        }

        // print axb
        cout << "time " << (k + 1) << endl;
        for (int i = 0; i < n; i++)
        {
            cout << setw(1) << right << setprecision(5);
            cout << b[i] << endl;
        }
        cout << endl;

    }

    fileInput.close();

    return 0;
}
