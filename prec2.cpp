#include <iostream>
#include <string>
using namespace std;

// Base class
class Sid
{
	public:
    string father = "siddique";
    void displayF()
    {
    cout<<"Siddique is the father of ";
    }
  
};
    class Ham: public Sid
    {
    public:
    string son ="Hamid.";
    void displayS()
    {
    cout<<son<<endl;
    }
         
    };
int main()
    {
    Ham D;
    D.displayF();
    D.displayS();
    return 0;
    }