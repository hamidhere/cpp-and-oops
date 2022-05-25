#include <iostream>
using namespace std;
inline int product(int x, int y)
{
    // in inline fucntion compiler places the code of function into main function's output call
    static int c = 0;
    c = c + 1;
    return x * y + c;
}
int main()
{
    //****inline functions,default arguments,constant arguments
    int a, b;
    cout << "enter 2 numbers a and b" << endl;
    cin >> a >> b;
    cout << "product of the a and b  numbers is: " << product(a, b) << endl;
    cout << "product of the a and b numbers is: " << product(a, b) << endl;
    cout << "product of the a and b numbers is: " << product(a, b) << endl;

    return 0;
}