#include <iostream>
using namespace std;

/*int fectorial(int n){
    //recursive functions-->Calling the same function within that function.
    if (n<=1){
    return 1;
}    
    return n*fectorial(n-1);

}*/
int fib(int n){
    if (n<2){
        return n;
    }
    return fib(n-2) +(n-1);
}
int main(){
    
    int a,i=0;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Febonaci expression of "<<a<<" is "<<fib(a)<<endl;
    while(i<a){
    cout<<"Febonaci expression of "<<i<<" is "<<fib(i)<<endl;
    i++;
    }
    return 0;
}