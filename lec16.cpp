#include <iostream>
using namespace std;
// call byt reference &call by value
int sum(int a, int b)
{
    int c = a + b;
    return c;
};
/*void swapPtr(int* a,int* b){ //call byt reference using pointers
    int temp=*a;
        *a=*b;
        *b=temp;

};*/
void swapRefVar(int &a, int &b)
{ // call by reference using CPP variable.
    int loc = a;
    a = b;
    b = loc;
};

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is: " << x << ".  The value of y is: " << y << endl;
    swapRefVar(x, y);
    cout << "The value of x is: " << x << ".  The value of y is: " << y << endl;
    // cout<<"the sum of 4 and 5 is: "<<sum(a,b)<<endl;

    return 0;
}