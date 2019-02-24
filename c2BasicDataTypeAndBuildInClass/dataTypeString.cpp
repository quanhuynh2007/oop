#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str1("Hello ");
    string str2 = "world!";
    string s;
    s = str1 + str2;
    cout << "The string: " << s << endl;
    cout << "Length of string = " << s.length() << endl;
    cout << "First character: " << s[0] << endl;
    int lastPos = s.length() - 1;
    cout << "Last character: " << s[lastPos] << endl;

    cout << "s.substr(2, 4) = " << s.substr(2, 4) << endl; // "llo "

    s.insert(5, " The");
    cout << "The string after insert(5, The): " << s << endl;
    s.insert(5, 3, '*');
    cout << "The string after insert(5, 3, *): " << s << endl;

    s.erase(5, 3);
    cout << "The string after erase(5, 3): " << s << endl;
    s.erase(6);
    cout << "The string after erase(6): " << s << endl;

    s = s + str2;
    cout << "The string start again: " << s << endl;

    cout << "s.find('l', 5): " << s.find('l', 5) << endl;
    cout << "s.find('l'): " << s.find('l') << endl;
    cout << "s.rfind('l'): " << s.rfind('l') << endl;
    cout << "s.find('z'): " << s.find('z') << endl;
    cout << "s.find(\"lo\"): " << s.find("lo") << endl;
    cout << "s.find(\"lo\", 5): " << s.find("lo", 5) << endl;
    cout << "s.find(\"loo\"): " << s.find("loo") << endl;
    return 0;
}