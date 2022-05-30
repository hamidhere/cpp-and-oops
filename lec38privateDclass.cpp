#include <iostream>
using namespace std;
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
    data1 = 11;
    data2 = 4;
}
int Base ::setData1()
{
    return data1;
}
int Base ::setData2()
{
    return data2;
}
class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    getData1();
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
    der.process();
    der.display();

    return 0;
}