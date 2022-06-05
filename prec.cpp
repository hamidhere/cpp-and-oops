#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData1();
    int getData1();
    int getData2();
};
void Base ::setData1(void)
{
    data1 = 30;
    data2 = 40;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void action();
    void display();
};
void Derived ::action()
{
    data3 = data2 * getData1();
}
void Derived ::display()
{
    
    cout<<"Data after the combination of two classes: "<<endl;
    cout<<"Value of data 1: "<<getData1()<<endl;
    cout<<"Value of data 2: "<<data2<<endl;
    cout<<"Value of data 3: "<<data3<<endl;
}

int main()
{
    Derived der;
    der.setData1();
    der.action();
    der.display();


    return 0;
}