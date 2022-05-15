#include <iostream>
using namespace std;
// forward declairation
class Complex;
class Calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //****to access a specific function of friend class***
    //friend int Calculator ::sumRealComplex(Complex, Complex);
    //friend int Calculator ::sumCompComplex(Complex, Complex);
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getNumber()
    {
        cout << "Your Numbers are " << a << "+" << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(5, 7);
    o2.setNumber(9, 10);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of Real Numbers:: " << res << endl;
    int rescomp = calc.sumCompComplex(o1, o2);
    cout << "The sum of Complex Numbers:: " << rescomp << endl;

    return 0;
}