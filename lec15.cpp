#include <iostream>
using namespace std;
//function prototyping-->used to run main function while declaring other function below it.
//type function-name(aurguments)-->syntax
int sum(int a,int b); 


int main(){
    //actual parameter — the actual value that is passed into the method by a caller. like num1,num2
    int num1,num2;
    cout<<"enter number 1: "<<endl;
    cin>>num1;
    cout<<"enter number 2: "<<endl;
    cin>>num2;
    cout<<"sum of the numbers: "<<sum(num1,num2)<<endl;
    
    
    return 0;
}
int sum(int a,int b)
    {/*formal parameters--> the identifier used in a method
     to stand for the value that is passed into the method by a caller. e.g5 a, b.*/
    int c=a+b;
    return c;
    }