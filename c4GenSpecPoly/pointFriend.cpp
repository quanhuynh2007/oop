class Point
{
    int x, y;
public:
    Point(int x0 = 0, int y0 = 0)
    {
        x = x0; y = y0;
    }
    friend class RECT;
    friend void PointMove(Point& p, int dx, int dy);
};
////////////////////////////////////////////////////
void PointMove(Point& p, int dx, int dy)
{
    p.x += dx;
    p.y += dy;
}

void FailAccess(Point& p, int sx, int sy)
{
    p.x *= sx; // WRONG COMPILE
    p.y *= sy; // WRONG COMPILE
}

////////////////////////////////////////////////////////
class RECT
{
    Point P, Q;
public:
    Point Center();
};

Point RECT::Center()
{
    Point M;
    M.x = (P.x + Q.x)/2;
    M.y = (P.y + Q.y)/2;
    return M;
}
