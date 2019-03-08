#ifndef _Figure_h
#define _Figure_h
#include <iostream>
using namespace std;

class Figure
{
protected:
    const char* classNameStr;
public:
    const char* className() // using const to avoid warning : warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
    {
        return classNameStr;
    }
    virtual void Input(istream& inDev) = 0;
    virtual float Area() = 0;
};
#endif
