#include "Square.h"

Square::Square(float a)
{
    width = height = a;
}
void Square::Input(istream& inDev)
{
    inDev >> width;
    height = width;
}
