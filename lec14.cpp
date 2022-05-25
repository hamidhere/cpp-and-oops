#include <iostream>
using namespace std;
// Structures, Unions & Enums
typedef struct student /*typedef  is a keyword used to assign
                         alternative names to the existing datatypes.*/
{
    int age;
    char section;
    double gpa;
} stu;
union car
{
    int modle;
    char colour;
    double cc;
};

int main()
{
    //******enums****
    enum room
    {
        hami,
        needi,
        mooni
    };
    room d32 = needi;
    cout << d32 << endl;
    cout << hami << endl;
    cout << needi << endl;
    cout << mooni << endl;
    //******Unions*****
    /*union car bmw;
    union car ford;
    bmw.modle = 18;
    bmw.colour = 'b';
    bmw.cc = 3.55;
    cout<<"modle "<<bmw.modle<<endl;
    cout<<"colour "<<bmw.colour<<endl;
    cout<<"cc "<<bmw.cc<<endl;*/
    //  ****structs****

    /*    stu hami;
        stu evie;
    hami.age = 22;
    hami.section = 'A';
    hami.gpa = 3.14;
    cout<<"Age of hami is: "<<hami.age<<endl;
    cout<<"Section of hami is: "<<hami.section<<endl;
    cout<<"gpa of hami is: "<<hami.gpa<<endl;*/

    return 0;
}