#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2 
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3 
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "Value of base1 " << base1int << endl;
        cout << "Value of base2 " << base2int << endl;
        cout << "Value of base3 " << base3int << endl;
        cout << "SUM OF THE VALUES IS: " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    derived hami;
    hami.set_base1int(20);
    hami.set_base2int(30);
    hami.set_base3int(5);
    hami.show();    

    return 0;
}