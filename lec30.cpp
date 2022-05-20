#include <iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(int , int );
    void printNumbers()
    {
        cout<<" Sum of the numbers is "<<a<<"+"<<b<<"i"<<endl;
    }

};
Complex ::Complex(int x, int y)
{
    a=x;
    b=y;
}
int main(){
    
    Complex a(5 , 7);
    a.printNumbers();
    Complex b=Complex( 6 , 8);
    b.printNumbers();

    



    return 0;
}