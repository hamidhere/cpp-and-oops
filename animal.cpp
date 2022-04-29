#include <iostream>
#include <string>
using namespace std;
class Animal{
    private:
    string sound; 
    int number ;    //  all animals has different  sound

    public:
    string colour,food;
    void setdata(string so,int sp);
    void getdata(){
        cout<<"The sound of the cat  was : "<<sound<<endl;
        cout<<"The favorite food of the cat  is : "<<food<<endl;
        cout<<"The colour of the cat  is : "<<colour<<endl;
        cout<<"The no. of the cat  is : "<<number<<endl;        
    }
};

void Animal :: setdata(string so,int no){
   sound=so;
   number=no;
}

int main(){
    Animal cat;
     cat.colour="black or white";
     cat.food="Milk";
    cat.setdata("Meauu",3);
    cat.getdata();
}