#ifndef _Rectangle_h
#define _Rectangle_h
#include <iostream>
using namespace std;
class Rectangle
{
protected:
    float width, height;
public:
    Rectangle(float w = 0, float h = 0);
    float Area();
    void Input(istream& inDevice);
};
#endif
