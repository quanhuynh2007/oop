#include "Rectangle.h"

Rectangle::Rectangle(float w, float h)
{
    width = w; height = h;
}
void Rectangle::Input(istream& inDev)
{
    inDev >> width >> height;
}
float Rectangle::Area()
{
    return width * height;
}
