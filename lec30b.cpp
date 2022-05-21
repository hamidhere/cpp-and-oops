#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    friend void distance(Point , Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoints()
    {
        cout << "The points are displayed here"
             << "(" << x << "," << y << ")" << endl;
    }
};
void distance(Point o1, Point o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    double dis = sqrt((x_diff * x_diff) + (y_diff * y_diff));
    cout<<"Distance between two points: "<<dis<<endl;
}

int main()
{
    
    Point x(2, 4);
    x.displayPoints();
    Point y(6, 8);
    y.displayPoints();
    distance(x , y);
    
    return 0;
}