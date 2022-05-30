#include <iostream>
using namespace std;
//destructer
class Num
{
    int number;
    public:
    Num(){};
    Num(int n, int b)
    {
        number = n;
        cout<<"Constructer is called with N numbers"<<endl;
        cout<<n<<","<<b<<endl;
    } 
    ~Num()
    {
        cout<<"Distructer invoked for o2"<<endl;
        cout<<"Distructer invoked for o3"<<endl;
    }
};
int main()
{
    Num o(30 , 50);
    {
        cout<<"Block enterd"<<endl;
        Num o2,o3; //distructer will invoke , for o2 and o3 object.
        cout<<"Two more objects"<<endl;
        cout<<"block exit"<<endl;
    }
    cout<<"Main"<<endl; //distructer will invoke again after exiting block, for o object. 


    return 0;
}