#include <iostream>
using namespace std;
//static data mambers and methods
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
int Employee ::count;
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