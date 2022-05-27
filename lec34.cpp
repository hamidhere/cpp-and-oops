#include <iostream>
using namespace std;
// copy constructers
class Number
{
    int n;

public:
    Number()
    {
        n=0;

    }
    Number(int num)
    {
        n = num;
    };
     Number(Number &obj) // When there is no constructor found, compiler provides its own copy constructor
    {
        cout<<"Calling a copy constructer"<<endl;
        n = obj.n;
    };
    void display()
    {
        cout << "The given number is " <<n << endl;
    }
};
int main()
{
    Number x(10),y(20),z(35),z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy constructor invoked
    z1.display();
    z2=z;        // Copy constructor will not be called
    z2.display();  
    Number z3=z; //// Copy constructor will be called
    z3.display();
    return 0;
}