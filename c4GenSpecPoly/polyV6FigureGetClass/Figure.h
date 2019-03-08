#ifndef _Figure_h
#define _Figure_h
#include <iostream>
using namespace std;

class Figure
{
public:
    virtual const char* className() = 0; // using const to avoid warning : warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
    virtual void Input(istream& inDev) = 0;
    virtual float Area() = 0;
};
#endif
