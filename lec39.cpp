#include <iostream>
using namespace std;
// Protected data members or member functions
class Base
{
    
    protected://can only be inherited by child class.
    int a;
};
class Derived : public Base
{
    private: //cannot be inherited by any drived class.
    int b;
    public: //can directly be inherited any where ether in the drived class or in the main function. 
    int c;

};
int main()
{
    Derived c;
    cout<<"C invoked"<<endl;
    return 0;
}