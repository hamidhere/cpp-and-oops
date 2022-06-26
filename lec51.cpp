#include <iostream>
using namespace std;
                // Pointers:
                //          *   --> derefrence operator
                //          &   --> refrence operator/ get address
                //          new --> to create a new object of the class. 
                //syntax of new --> class_name *object_name = new class_name;
                //function call --> *object_name.function_name();
                //arrow operator--> object_name->function_name();   
class base1
{
    int data1;

public:
    void setdata(int i)
    {
        data1 = i;

        cout << "Constructer of base1 class called" << endl;
    }
    void printData1()
    {
        cout << "Value of Data1 is: " << data1 << endl;
    }
};

int main()
{

    // base1 o;            //how to access the public members of the object using pointer...
    // base1* ptr= &o;
    base1 *Obj = new base1[3];
    // (*Obj).setdata(15);
    Obj->setdata(30);      //arrow operator--> object_name->function_name();
    Obj->setdata(30); 
    // (*Obj).printData1();
    Obj->printData1();

    // int *ptr = &o;

    return 0;
}