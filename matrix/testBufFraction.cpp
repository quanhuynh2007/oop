#include<iostream>
#include<string>
using namespace std;
int main()
{
    string buf;
    cin.ignore();  // thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
    std::fflush(stdin);
    cout<<"Nhap ten cua ban :  "<<endl;
    std::cin >> buf;
    int pos = buf.find('/');
    cout << "pos = " << pos;
    int num, den;
    if (pos > 0)
    {
        num = stoi(buf.substr(0, pos));
        den = stoi(buf.substr(pos + 1, buf.length() - pos));
    }
    else
    {
        num = stoi(buf);
        den = 1;
    }
    cout << "num = " << num << endl;
    cout << "den = " << den << endl;
    cout<<"xin chao ban "<<buf<<" den voi ngon ngu lap trinh c/c++!!!"<<endl;
    return 0;
}
