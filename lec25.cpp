#include <iostream>
using namespace std;
//array of objects and passing objects as function arguments
class Employee
{
    int id;
    int sellary;

public:
    void setid()
    {
        sellary = 11500;
        cout << "Enter employee ID: " << endl;
        cin >> id;
        cout << "Enter employee sellary: " << endl;
        cin >> sellary;
    }
    void getid()
    {
        cout << "ID is: " << id << endl;
        cout << "Sellary is: " << sellary << endl;
    }
};
int main()
{

    // Employee hamid;
    // hamid.setid();
    // hamid.getid();
    Employee company[3];
    /*company[0].setid();
    company[0].getid();
    company[1].setid();
    company[1].getid();
    company[2].setid();
    company[2].getid();*/
    for (int i = 0; i < 3; i++)
    {
        /* code */
        company[i].setid();
        company[i].getid();
    }

    return 0;
}