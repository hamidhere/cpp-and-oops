#include <iostream>
using namespace std;
class BankDeposit
// Dynamic Initialization of Objects Using Constructors -
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;
    public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r); //intrestRate will be 0.04%
    BankDeposit(int p, int y, int R); //intrestRate will be 14  
    void show();
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal =p;
    years=y;
    intrestRate=r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue= returnValue * (1+intrestRate);
    }
    
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal =p;
    years=y;
    intrestRate= float (r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue= returnValue * (1+intrestRate);
    }
    
}
void BankDeposit ::show()
{
    cout<<"The Principal amount was "<<principal
    <<". Return value after "<<years
    <<" years is: "<<returnValue<<endl;
};
int main()
{
    BankDeposit bd1,bd2,bd3;
    int p, y;
    float r;
    int R;
    cout<<"Inter the Value of p, y, r :"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    cout<<"Inter the Value of p, y, R :"<<endl;
    cin>>p>>y>>R;
    bd1 = BankDeposit(p,y,R);
    bd1.show();

        return 0;
}