#include <iostream>
using namespace std;
class Test
{
private:
    static int count;
public:
    static int show()
    {
        return count;
    }
    Test()
    {
        ++count;
    }
    ~Test()
    {
        --count;
    }
};
int Test::count = 0;

int main()
{
    cout << endl << "staticDataMember.cpp" << endl;
    Test a;
    Test b;
    cout << "Number object: " << Test::show() << endl;
    return 0;
}
