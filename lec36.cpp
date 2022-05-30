#include <iostream>
using namespace std;
//Inheritance and its types.
class Base
{
private:
    int a;

public:
    void BgetData()
    {
        int data;
        data = a;
    }
    void BsetData()
    {
        a = 1;
        cout << a<<": Inheritance ";
    }
};
class Derived : public Base
{
    int b;

public:
    void DsetData()
    {
        int data1;
        b = data1;        
        
    }
    void DgetData()
    {
        
        int data1 = 2;
        cout<<data1<<": Its types"<<endl;        
        
    }
};
int main()
{
    Derived o;
    o.BsetData();
    o.DgetData();    

    return 0;
}