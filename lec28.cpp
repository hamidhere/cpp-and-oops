#include <iostream>
using namespace std;
class X
{
    int data;
friend void add(); 
public:
    void setValue(int value)
    {
        data = value;
    }
};
class Y
{
    int num;
friend void add();
public:
    void setValue(int value)
    {
        num = value;
    }
};
void add(X o1, Y o2){
    cout<<"Sum of the data is"<<o1.data+o2.num<<endl;
}

int main()
{
    X a;
    a.setValue(15);

    Y b;
    b.setValue(5);


    return 0;
}