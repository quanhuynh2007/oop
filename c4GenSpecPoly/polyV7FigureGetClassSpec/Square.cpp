#include "Square.h"

Square::Square(float a)
{
    width = height = a;
    classNameStr = "Square";
}
void Square::Input(istream& inDev)
{
    inDev >> width;
    height = width;
}
