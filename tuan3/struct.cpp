#include <iostream>
using namespace std;
struct Point
{
    int x, y;
    void print()
    {
        cout << x << " " << y;
    }
    void in()
    {
        cin >> x >> y;
    }
};
struct Rect
{
    Point a;
    double w, h;
    bool contain()
    {
        Point point;
        point.x = 5;
        point.y = 6;
        const Point p = point;
        if (p.y > a.y)
            return 0;
        if (p.y < a.y - h)
            return 0;
        if (p.x < a.x)
            return 0;
        if (p.x > a.x + w)
            return 0;
        return 1;
    }
};
struct Ship{
Point a;
string b
void move()
{
        a.x+=a.x;
        a.y+=a.y;
}
};
void display(const Ship& ship)
{
    cout<<ship.b<<endl<<ship.a.x<<" "<<ship>a.y;
}

int main()
{
    Rect rec;
    rec.a.in();
    cin >> rec.w >> rec.h;
    Point point;
    if (rec.contain())
        cout << "yes";
    else
        cout << "no";
}
