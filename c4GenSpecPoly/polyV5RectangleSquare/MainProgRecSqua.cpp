#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

Figure* figMaxArea(Figure* figs[], int nFig)
{
    Figure* figMax = NULL;
    cout << endl << "figMaxArea: " << figs[0]->Area();
    if (nFig > 0)
    {
        figMax = figs[0];
        for (int i = 1; i < nFig; i++)
        {
            cout << " " << figs[i]->Area();
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
    cout << endl << "polyV5RectangleSquare MainProgRecSqua.cpp Triangle.cpp Circle.cpp Ellipse.cpp Square.cpp Rectangle.cpp" << endl;

    Figure* Figs[] = {  new Rectangle(9.3F, 9.7F),  new Circle(4.5F),
                        new Ellipse(9.24, 4.7F),    new Square(9.5F),
                        new Triangle(10.7F, 6.4F),  new Ellipse(3.7F, 7.8F)
                    };
    int nFig = sizeof(Figs)/sizeof(Figure*);
    Figure* aFig = figMaxArea(Figs, nFig);
    if (aFig != NULL)
    {
        cout << endl << "Max = " << aFig->Area() << endl;
    }
    return 0;
}
