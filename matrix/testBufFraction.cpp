#include<iostream>
#include<string>
#include <math.h>
using namespace std;
int main()
{
    string buf;
    cin.ignore();  // thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
    std::fflush(stdin);
    cout<<"Nhap ten cua ban :  "<<endl;
    std::cin >> buf;
    int pos = buf.find('/');
    cout << "pos = " << pos << endl;
    int num, den;
    if (pos > 0)
    {
        num = stoi(buf.substr(0, pos));
        den = stoi(buf.substr(pos + 1, buf.length() - pos));
    }
    else
    {
        pos = buf.find('.'); // Float
        cout << "pos = " << pos << endl;
        if (pos > 0)
        {
            den = stoi(buf.substr(pos + 1, buf.length() - pos));
            num = stoi(buf.substr(0, pos)) * pow(10, buf.length() - 2) + den;
            den = pow(10, buf.length() - 2);
        }
        else
        {
            num = stoi(buf);
            den = 1;
        }
    }
    cout << "num = " << num << endl;
    cout << "den = " << den << endl;
    cout<<"xin chao ban "<<buf<<" den voi ngon ngu lap trinh c/c++!!!"<<endl;
    return 0;
}
