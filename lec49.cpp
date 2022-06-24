#include <iostream>
using namespace std;
class Base1
{
    int a, b;

public:
    // Base1(int i, int j) : a(i), b(j)
    // Base1 (int i, int j):a(i), b(10+j)
    // Base1 (int i, int j):a(i), b(a+j)
    
    Base1(int i, int j) : a(i)
    {
        b = j+20;
        cout << "constructer invoked." << endl;
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    Base1 o(13, 12);

    return 0;
}