#include <iostream>
using namespace std;
//Single inheritance
class Base
{
    int data1;

public:
    int data2;
    void getData1();
    int setData1();
    int setData2();
};
void Base ::getData1()
{
    data1 = 30;
    data2 = 50;
}
int Base ::setData1()
{
    return data1;
}
int Base ::setData2()
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * setData1();
}
void Derived ::display()
{
    cout << "start" << endl;
    cout << "Data 1 is: " << setData1() << endl;
    cout << "Data 2 is:" << data2 << endl;
    cout << "Data 3 is:" << data3 << endl;
}
int main()
{
    Derived der;
    der.getData1();
    der.process();
    der.display();

    return 0;
}