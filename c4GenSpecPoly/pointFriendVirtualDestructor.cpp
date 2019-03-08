class Point
{
    int x, y;
public:
    Point(int x0 = 0, int y0 = 0)
    {
        x = x0; y = y0;
    }
    friend class RECT;
};
////////////////////////////////////////////////////
#include <iostream>
using namespace std;
class Polygon
{
protected:
    int nVer;
    Point* Vers;
public:
    Polygon(int n = 0)
    {
        cout << endl << "Polygon(int n = 0)" << endl;
        Vers = NULL; nVer = 0;
        if (n > 0)
        {
            nVer = n;
            Vers = new Point[nVer];
        }
    }
    int nVertice()
    {
        return nVer;
    }
    virtual ~Polygon()
    {
        cout << endl << "virtual ~Polygon()" << endl;
        if (Vers != NULL)
        {
            delete[] Vers;
            Vers = NULL;
            nVer = 0;
        }
    }
};
////////////////////////////////////////////////////////
class RECT: public Polygon
{
    Point P, Q;
    char* Buffer;
public:
    Point Center();
    RECT(Point A, Point B);
    virtual ~RECT();
};

Point RECT::Center()
{
    Point M;
    M.x = (P.x + Q.x)/2;
    M.y = (P.y + Q.y)/2;
    return M;
}

RECT::RECT(Point A, Point B)
{
    cout << endl << "RECT::RECT(Point A, Point B)" << endl;
    nVer = 4;
    P = A;
    Q = B;
    int dx = P.x - Q.x;
    int dy = P.y - Q.y;
    long BufferSize = dx * (long)dy;
    if (BufferSize < 0)
    {
        BufferSize = -BufferSize;
    }
    Buffer = new char[BufferSize];
}

RECT::~RECT()
{
    cout << endl << "RECT::~RECT()" << endl;
    if (Buffer != NULL)
    {
        delete[] Buffer;
        Buffer = NULL;
    }
}

int main()
{
    cout << endl << "Example method Virtual Destructor: pointFriendVirtualDestructor.cpp" << endl;
    Polygon* pg = new RECT(Point(4, 5), Point(-3, 11));
    cout << pg->nVertice() << endl;

    delete pg;
    return 0;
}


// Output 
// Example method Virtual Destructor: pointFriendVirtualDestructor.cpp

// Polygon(int n = 0)

// RECT::RECT(Point A, Point B)
// 4

// RECT::~RECT()

// virtual ~Polygon()
