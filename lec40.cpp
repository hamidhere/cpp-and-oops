#include <iostream>
using namespace std;
// Multilevel inheritance                student-->exam-->result
class Student
{
protected:
    int roll_no;

public:
    void set_roll(int);
    void getRoll(void);
};
    void Student ::set_roll(int r)
    {
        r = roll_no;
    }
    void Student ::getRoll()
    {
        cout << "Roll no is " << roll_no << endl;
    }
class Exam : public Student
{
protected:
    float physics;
    float english;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam ::setMarks(float m1, float m2)
{
     physics= m1;
     english= m2;
}
void Exam ::getMarks()
{
    cout << "Marks of physics: " << physics << endl;
    cout << "Marks of physics: " << english << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        
        void getRoll();
        void getMarks();
        cout<<"Percentage: "<<(physics+english)/2<<endl;
    }
};
int main()
{
    Result hamid;
    hamid.set_roll(34);
    hamid.getRoll();
    hamid.setMarks(40,50);
    hamid.getMarks();
    hamid.display_result();

    return 0;
}