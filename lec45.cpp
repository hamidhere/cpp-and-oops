#include <iostream>
using namespace std;
class Student

{


public:
    int rollNo;
    void setData()
    {

        cout << "Roll No of the student is " << endl;
        cin >> rollNo;
    }
    void getData()
    {

        cout << "Roll No of the student is " << rollNo << endl;
    }
};
class Test : virtual public Student
{
protected:
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

        cout << "Marks in Physics" << phy << endl;
        cout << "Marks in math " << math << endl;
    }
    void TotalMarks()
    {
        int sum;
        sum = phy + math;
        cout << "Sum of the Marks is:" << sum << endl;
    }
};
class Sport : virtual public Student
{
public:
    int cric, footbal;
    void setScore(int c, int f)
    {

        cric = c;
        footbal = f;
        cout << "Score in cric:" << cric << endl;
        cout << "Score in football: " << footbal << endl;
    }
    void displayScore()
    {
        int total;
        total = cric + footbal;
        cout << "Total Score is: "
             << total << endl;
    }
};
class Result : public Test, public Sport
{
public:
    
    int Final;
    void FinalResult()
    {
        Final = math + phy + cric + footbal;
        cout << "Final Result of the Student is:\n " << Final << endl;
        
    }
};

int main()
{
    Result R;
    R.setData();
    R.setMarks(70, 72);
    R.getData();
    R.displayMarks();
    R.TotalMarks();
    R.setScore(5, 4);
    R.displayScore();
    R.FinalResult();

    return 0;
}