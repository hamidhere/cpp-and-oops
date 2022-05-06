#include <iostream>
using namespace std;
class complex
//****friend functions***
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class...
c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/  
{
private:
    int a, b;
friend complex sumComplex(complex o1, complex o2);
public:
    void setNumbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumbers()
    {
        cout << "Your Numbers are: " << a << "+" << b << "i" << endl;
    }
};
complex sumComplex(complex o1,complex o2)
{
    complex o3;
    o3.setNumbers((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
int main()
{
    complex c1,c2,sum;
    c1.setNumbers(5,6);
    c1.printNumbers();
    c2.setNumbers(7,8);
    c2.printNumbers();
    sum = sumComplex(c1,c2);
    sum.printNumbers();


    return 0;
}