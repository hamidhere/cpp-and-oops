#include <iostream>
using namespace std;
class C2;
class C1
{
    int val1;
    friend void swapData(C1 &, C2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void displayData()
    {
        cout << val1 << endl;
    }
};
class C2
{
    int val2;
    friend void swapData(C1 &, C2 &);

public:
    void indata(int b)
    {
        val2 = b;
    }
    void displayData()
    {
        cout << val2 << endl;
    }
};
void swapData(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 oc1;
    C2 oc2;
    oc1.indata(35);    
    oc2.indata(40);
    swapData(oc1, oc2);

    cout << "The number of oc1 after swaping is: ";
    oc1.displayData();
    cout << "The number of oc2s after swaping is: ";
    oc2.displayData();

    return 0;
}