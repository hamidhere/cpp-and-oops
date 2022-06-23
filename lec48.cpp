#include <iostream>
using namespace std;
class base1
{
    int data1;
    public:
        base1(int d)
    {
        data1 = d;
        cout<<"Constructer of base1 class called"<<endl;
    }
    void printData1()
    {
        cout<<"Value of Data1 is:"<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
        base2(int d2)
    {
        data2 = d2;
        cout<<"Constructer of base2 class called"<<endl;
    }
    void printData2()
    {
        cout<<"Value of Data2 is:"<<data2<<endl;
    }
};
class Derived : public base1 , public base2
{
    int data3, data4;
    public:
    Derived (int a ,int b ,int c ,int d): base1(a), base2 (b)
    {
        data3 = c;
        data4 = d;
        cout<<"Derived construter called"<<endl;
    }
    void printData3()
    {
        cout<<"Value of data3 "<<data3<<endl;
        cout<<"Value of data4 "<<data4<<endl;
    }
};
int main(){

    Derived Hami(4,5,6,7);
    Hami.printData1();
    Hami.printData2();
    Hami.printData3();
    return 0;
}