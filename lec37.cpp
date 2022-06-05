#include <iostream>
using namespace std;
class Car
{
    int plate;
    public:
    string name;
    void setP()
    {
        int p;
        plate = p;
        cin>>name;

    } 
    void getData()

    {
        cout<<"car name is "<<name<<endl;
    }  
};
int main()
{
    Car c;
    c.setP();
    c.getData();

    return 0;
}