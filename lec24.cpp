#include <iostream>
using namespace std;
//static data mambers and methods
//static data mambers and methods have only access of other static data mambers and methods. 
//called outside the class and main function
//static data mambers and methods can be directly called by using ClassName ::StaticFunctionName(); 
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter Employee id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id is " << id << " And Number allowed is: " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; //No need to initialize because they have default value 0.
int main()
{
    Employee hamiii;
    hamiii.setData();
    hamiii.getData();
    Employee::getCount();
    Employee abii;
    abii.setData();
    abii.getData();
    Employee::getCount();
    Employee mooni;
    mooni.setData();
    mooni.getData();
    Employee::getCount();

    return 0;
}