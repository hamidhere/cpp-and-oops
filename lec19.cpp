#include <iostream>
using namespace std;
int sub(int a, int b){
    //function overloading--> creating more than 1 functions
    // with same name but with differetnt data types.  
    cout<<"subtrrection of two numbers" <<endl;
    return a-b;
}
int sub(int a, int b, int c){
    cout<<"subtrrection of 3 numbers" <<endl;
    return a-b-c;
}

int area(int r ){
    cin>>r;
    return 3.14*r*r;
}
int volume(int c){
    return (c*c*c);
}
int rectangle(int l,int w, int h ){
    return l*w*h;
}

int main(){
    int x,y,z;
cout<<sub(10,12)<<endl;
cout<<sub(23,10,7)<<endl;
cout<<"area of the square: \n"<<area(0)<<endl;
cout<<"Volume of the cube: \n"<<volume(7)<<endl;
cout<<"area of the rectangle \n: "<<rectangle(3,4,2)<<endl;

    return 0;
}