#include <iostream>
using namespace std;
// 1:template->default parameters 2:class 3:->2 objects
template <class d1 = int, class d2 = float, class d3 = string>
class Hami
{
public:
    d1 x;
    d2 y;
    d3 z;
    Hami(d1 a, d2 b, d3 c)
    {
        x = a,
        y = b;
        z = c;
    }
    void display()
    {
        cout << "the value of a is:" << x << endl;
        cout << "the value of a is:" << y << endl;
        cout << "the value of a is:" << z << endl;
    }
};
int main()
{
    Hami<> H(10,20.30,"String Called\n");
    H.display();
    Hami<char,float,string> i('M',70.77,"String");
    i.display();

    return 0;
}