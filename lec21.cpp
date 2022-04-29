#include <iostream>
using namespace std;

class Animal{
    private:
    int id;
    string specie;
    public:
    string name,verity;
    void getdata(int id1, string S1);
    void setdata(){
        cout<<"Animal id:"<<id<<endl;
        cout<<"Animal specie:"<<specie<<endl;
        cout<<"Animal name:"<<name<<endl;
        cout<<"Animal verity:"<<verity<<endl;
    }
   
};
 void Animal :: getdata(int id1,string S1)
    {
        id=id1;
        specie=S1;
    }
int main(){
    Animal elephent;
    elephent.getdata(10,"Child");
    elephent.name ="Umeriaa ";
    elephent.verity="Hrami verity";
    elephent.setdata();   


    return 0;
}