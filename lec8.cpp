#include <iostream>
#include <iomanip>
using namespace std;
int h=20;
int main() {
    int a = 37;
    cout<<a;
    a = 40;
    cout<< "\n" << a;  
//*****Constants****
const double b = 27.70;
cout<<"\n"<<b<<endl;
//*** manipuletors e.g endl for new line*****
//setw menipuletor using <iomanip> liberary
int x=7, y=17, z=170, l=1170;
cout<<"show output with width 4"<<endl;
cout<< setw(4)<<x<<endl;
cout<< setw(4)<<y<<endl;
cout<< setw(4)<<z<<endl;
cout<< setw(4)<<l<<endl;
//*** Precedence***
/* :: Scope resolution operator has highest precedence
M D M A S is presedence of arithmatic operators*/
int h=7 , A=5, m=3 , i=6 , d=2 ;
cout<<"result of precedence order will be  "<< (((A - (d + i)) + h)) << "\n" << ::h << endl;


return 0;
}