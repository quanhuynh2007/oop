#ifndef _Figure_h
#define _Figure_h
#include <iostream>
using namespace std;

class Figure
{
public:
    virtual void Input(istream& inDev) = 0;
    virtual float Area() = 0;
};
#endif
