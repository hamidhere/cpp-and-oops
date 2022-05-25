#include <iostream>
using namespace std;
class Complex
{

    int a, b;

public:
    Complex(int x, int y) //Parametrized constructers
    {
        a = x;
        b = y;
    }
    Complex(int x) //Parametrized constructers
    {
    {
        a = x;
        b = 0;
    }
    Complex() //default constructers
    {
        a = 0;
        b = 0;
    }
    void displayPoints()
    {
        cout << "The points are displayed here: "
             << "(" << a << "," << b << ")" << endl;
    }
};
int main()
{

    Complex c(5, 7);
    c.displayPoints();
    Complex c1(5);
    c1.displayPoints();
    Complex c2;
    c2.displayPoints();
    return 0;
}