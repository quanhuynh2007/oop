#include <iostream>
using namespace std;
class Singleton
{
private:
    static Singleton* _instance; // object only one

    Singleton();
public:
    static Singleton* getInstance();
};

Singleton* Singleton::_instance = NULL;

Singleton::Singleton()
{

}

Singleton* Singleton::getInstance()
{
    if (_instance == NULL)
    {
        _instance = new Singleton();
    }
    return _instance;
}

int main()
{
    cout << "singletonPattern.cpp" << endl;
    Singleton* object = Singleton::getInstance();
    return 0;
}
