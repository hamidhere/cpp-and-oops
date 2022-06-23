#include <iostream>
using namespace std;
class Student

{
    int id;
    int rollNo;
    public:
    void setData()
    {
       cout<<"ID of the Student is:"<<endl;
       cin>>id;
        cout<<"Roll No of the student is: "<<endl;
        cin>>rollNo;
    }
    void getData()
    {
        cout<<"ID of the Student is:"<<id<<endl;
        cout<<"Roll No of the student is: "<<rollNo<<endl;

    }
};
class Test :  public Student
{
    int phy;
    int math;
    public:
    void setMarks(int p, int m)
    {
        phy = p;
        math = m;
    }      
    void displayMarks()
    {  
    int sum;
    cout<<"Marks in Physics: "<<phy<<endl;
    cout << "Marks in math: "<<math<<endl;
        sum=phy+math;
        cout<<"Sum of the Marks is:"<<sum<<endl;
    }
    
};
class Sport : public Student
{
    public:
    int cric , footbal;
    void setScore(int c, int f)
    {
        int total;
        cric = c;
        footbal = f;
        cout<<"Score in cric:"<<cric<<endl;
        cout<<"Score in football: "<<footbal<<endl;
        total = cric + footbal;
        cout<<"Total Score is: \n"<<total<<endl;

    }

};

int main(){
Test t;
t.setData();
t.getData();
t.setMarks(95 ,99);
t.displayMarks();
Sport s;
s.setScore(5 ,4);

    return 0;
}