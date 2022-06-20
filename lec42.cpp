#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void setdataSimple()
    {

        cout << "Enter value of a " << endl;
        cin >> a;
        cout << "Enter value of b " << endl;
        cin >> b;
    }
    void CalcSimple()
    {
        cout << "Addition of Two numbers is: " << a + b << endl;
        cout << "subtraction of Two numbers is: " << a - b << endl;
        cout << "Multiplication of Two numbers is: " << a * b << endl;
        cout << "Division of Two numbers is: " << a / b << endl;
    }
};
class ScientificCalculator
{
    protected:
    int a, b;

public:
    void setdataScientific()
    {

        cout << "Enter value of a " << endl;
        cin >> a;
        cout << "Enter value of b " << endl;
        cin >> b;
    }
    void CalcScientific()
    {
        cout << "sin of a is: " << sin (a) << endl;
        cout << "cos of b is: " << cos (b) << endl;
        cout << "tan of a is: " << tan (a) << endl;
        cout << "exp of b is: " << exp (b) << endl;
    }

    };
    class HybridCalculator : public SimpleCalculator, public ScientificCalculator
    {
    };

    int main()
    {
        HybridCalculator C;
        C.setdataSimple();
        C.CalcSimple();
        C.setdataScientific();
        C.CalcScientific();

        return 0;
    }