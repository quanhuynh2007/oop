#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Triangle.h"

Figure* figMaxArea(Figure* figs[], int nFig)
{
    Figure* figMax = NULL;
    if (nFig > 0)
    {
        figMax = figs[0];
        for (int i = 1; i < nFig; i++)
        {
            if (figMax->Area() < figs[i]->Area())
            {
                figMax = figs[i];
            }
        }
    }
    return figMax;
}

int main()
{
    cout << endl << "cat MainProgRecSquaPolyv1.cpp Rectangle.cpp Square.cpp" << endl;

    return 0;
}
