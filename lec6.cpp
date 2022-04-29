// system header files
#include <iostream>
using namespace std;

                        /*******header files and operators*********/
//user defined header files
//#include <hami.h>
int main(){

   
    cout<<"Hellow World";

    // operators in C++
    int a = 10;    int b = 15;
     cout<< "\nThe result of  a&b is:"<< a+b <<endl;
    cout<< "The result of  a&b is:"<< a-b <<endl;
    cout<< "The result of  a&b is:"<< a*b <<endl;
    cout<< "The result of  a&b is:"<< a/b <<endl;
    cout<< "The result of  a&b is:"<< a%b <<endl;
    cout<< "The result of  a&b is:"<< a++ <<endl;
    cout<< "The result of  a&b is:"<< ++a <<endl;
    cout<< "The result of  a&b is:"<< a-- <<endl;
    cout<< "The result of  a&b is:"<< --a <<endl;  
    //assignmet operators --> used to assign values to variables
    //int a=10;
    //char c;  
    //float e=4.7;


    //comaprison operators
    cout<< "*********Comparison Operators******"<<endl;
    cout<< "The result of  a==b is:"<< (a==b) <<endl;
    cout<< "The result of  a!=b is:"<< (a!=b) <<endl;
    cout<< "The result of  a>=b is:"<< (a>=b) <<endl;
    cout<< "The result of  a<=b is:"<< (a<=b) <<endl;
    cout<< "The result of  a>b is:" << (a>b ) <<endl;
    cout<< "The result of  a<b is:" << (a<b ) <<endl;
    
    //logic operators
        cout<< "*********Comparison Operators******"<<endl;
    cout<< "The result of logical operator (a==b) && (a<b) is:"<< ((a==b) && (a<b)) <<endl;
    cout<< "The result of logical operator (a!=b) || (a<b) a!=b is:"<< ((a!=b) || (a<b)) <<endl;
    cout<< "The result of logical operator ! a==b is:"<< (!(a==b)) <<endl;
    cout<< "The result of logical operator  a<=b is:"<< (a<=b) <<endl;

    return 0;
} 