#include <iostream>
using namespace std;
// ambiguity in inheritance
class Base1
{
public:
    void Greet()
    {
        cout << "hello" << endl;
    }
};
class Base2
{
public:
    void Greet()
    {
        
        cout << "Suna ki hall ny" << endl;
    }
};
class Derived : public Base1, public Base2
{
    public:
    void Greet()
    {
       Base1 :: Greet();

    }
};
int main()
{
    Base1 obj1;
    obj1.Greet();
    Base2 obj2;
    obj2.Greet();
    Derived obj3;;
    obj3.Greet();

    return 0;
}