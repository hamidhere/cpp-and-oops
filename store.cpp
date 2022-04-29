#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Hello! Welcome to the app. "<<endl;
    cout<<"Please create a new account. "<<endl;
    cout<<"Choose a Username! "<<endl;
    string user;
    cin>>user;    
    cout<<"Choose a Password! "<<endl;
    string pwd;
    cin>>pwd;
    cout<<"Please enter Your Information! "<<endl;
    cout<<"Username:"<<endl;
    string username;
    cin>>username;
    cout<<"Password:"<<endl;
    string login_pwd;
    cin>>login_pwd;
    while (username!=user || pwd!=login_pwd )
    {
        
        cout<<"invalid login username or password"<<endl;
        cout<<"username: "<<endl;
        cin>>username;
        cout<<"Password:"<<endl;
        cin>>login_pwd;
        
        
    }
    cout<<"You have succcessfully logged in! "<<endl;

    cout<<"*********Welcome to The Store*********"<<endl;
    double balance=20.00;
    cout<<"Your current balance is :\n "<<balance<<" dollars"<<endl;
    cout<<"Would you like to add some cash"<<endl;
    string q1;
    cin>>q1;
    if(q1=="yes"){
    cout<<"How much cash you wanna add: "<<endl;
    double cash;
    cin>>cash;    
    cout<<"Here is your current balance:\n "<<balance + cash<<" dollars"<<endl;
    }
    else{
        cout<<"Ok! As you wish."<<endl;
        }
    cout<<"So Would you like to order pizza? "<<endl;
    string q2;
    cin>>q2;
    if (q2=="yes")
    {
        cout<<"which flavour would you like to eat"<<endl;
        string pizzaFlavour[] ={"Fajita","Tikkah","Kabab","Malai Boti"};
        double pizzaPrice[]   ={5.00,6.50,7.00,8.95};
        cout<<"1: "<<pizzaFlavour[0]<<" ----- "<<pizzaPrice[0]<<" dollars"<<endl;
        cout<<"2: "<<pizzaFlavour[1]<<" ----- "<<pizzaPrice[1]<<" dollars"<<endl;
        cout<<"3: "<<pizzaFlavour[2]<<" ----- "<<pizzaPrice[2]<<" dollars"<<endl;
        cout<<"4: "<<pizzaFlavour[3]<<" ----- "<<pizzaPrice[3]<<" dollars"<<endl;
        cout<<"Your choice!"<<endl;
        int q3;
        cin>>q3;
        while (q3>4 || q3<1)
        {
            cout<<"Wrong input! Please enter a valid number. "<<endl;
            cin>>q3;
        }
        
        if (q3==1)
        {
            cout<<"You have ordered "<<pizzaFlavour[0]<<endl;
            cout<<"The total of your order is "<<pizzaPrice[0]<<endl;
            cout<<"Remaining balance in your account is "<<balance-pizzaPrice[0]<<endl;

        } else if (q3==2)
        {
            cout<<"You have ordered "<<pizzaFlavour[1]<<endl;
            cout<<"The total of your order is "<<pizzaPrice[1]<<endl;
            cout<<"Remaining balance in your account is "<<balance-pizzaPrice[1]<<endl;
        }else if (q3==3)
        {
            cout<<"You have ordered "<<pizzaFlavour[2]<<endl;
            cout<<"The total of your order is "<<pizzaPrice[2]<<endl;
            cout<<"Remaining balance in your account is "<<balance-pizzaPrice[2]<<endl;
        }else if (q3==4)
        {
            cout<<"You have ordered "<<pizzaFlavour[3]<<endl;
            cout<<"The total of your order is "<<pizzaPrice[3]<<endl;
            cout<<"Remaining balance in your account is "<<balance-pizzaPrice[3]<<endl;
        }        
        
        
    }else{
        cout<<"Ok have a good day!"<<endl;
    }
    
    return 0;
}