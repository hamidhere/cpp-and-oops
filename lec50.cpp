#include <iostream>
using namespace std;

int main()
{

    int a;
    a = 70;
    int *ptr = &a;                               // & -> reference operator
    cout << "Value of A is: " << ptr << endl;    // it stores the address of integer a;
    cout << "Value of A is: " << *(ptr) << endl; // it stores the vale at address of integer a; // * -> dereference operator
    // New Operator
    int *p = new int(40);
    cout << "New operator: " << *(p) << endl;
    float *q = new float(40.76);
    cout << "New operator: " << *(q) << endl;
    int *arr = new int[5];
     arr[0] = 30;
    delete[] arr;
     cout<<arr[0]<<endl;
    
    // for (int arr = 0; arr < 5; arr++)
    // {
    //     /* code */
    //     cout << "Array: " << arr << endl;
    // }

        return 0;
}