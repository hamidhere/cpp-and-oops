#include <iostream>
using namespace std;

int main(){
                        //************pointers

    int a=15;
    int* b = &a;
    // & ---> address of operator 
    cout<<"Value of variable &a "<<&a<<endl;
    cout<<"Value of pointer variable b "<<b<<endl;
    // * ---> (value at) operator! derefrence operator
    cout<<"Value at address b is "<<*b<<endl;
    //pointer to pointer 
    int** c= &b;
    cout<<"Address of b is "<<&b<<endl;
    cout<<"Address of b is "<<c<<endl; 
    cout<<"value at Address c is "<<*c<<endl; 
    cout<<"value at Address value c is "<<**c<<endl;    



    return 0;
}