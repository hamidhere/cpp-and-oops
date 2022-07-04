#include <iostream>
using namespace std;
template <class t1,class t2>
class Sum
{

public:
    t1 a, b;
    t2 c;
    t2 result;
    void displaySum()
    {
        a= 15;
        b=20;
        c=5.17;
        cout << "Enter the numbers:" << endl;
        t2 result=a+b+c;
        cout<<"Result: "<<result<<endl;
        
    }
};
int main()
{
    Sum <int,float>obj;
    obj.displaySum();
    
    return 0;
}