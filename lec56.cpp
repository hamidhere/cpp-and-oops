#include <iostream>
using namespace std;
//Virtual Functions
class Base
{
public:
    int bVar;
    void display()
    {
        cout << "1: Base function:" << bVar << endl;
    }
};
class Derived : public Base
{
public:
    int dVar=66;
    void display()
    {
        cout << "2: Base function:" << bVar << endl;
        cout << "3: derived function:" << dVar << endl;
    }
};
int main()
{
    Base* bptr;
    Base obj;
    Derived objD;
    bptr = &objD;
    bptr->bVar=60;    
    bptr->display();
    Derived * dptr;
    dptr->bVar= 66;
    dptr->dVar=79;
    dptr->display();
   

    return 0;
}