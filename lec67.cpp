#include <iostream>
using namespace std;
// void display()
// {
//     cout << "empty function" << endl;
// }
template<class t1,class t2,class t3>
float avg(t1 a,t2 b)
{
    t3 X = (a+b)/2;
    cout<<"average:"<<X<<endl;
    return X;
}
template <class L, class M>
void swapp(L &m,M &o)
{
    L temp=m;
    m=o;
    o=temp;
    // cout<<m"\n"<<o<<endl;


}

int main()
{
    avg<double,double,float>(6.5,9.7);
    string e="Chracter",f="String";
    swap(e,f);
    cout<<e<<"\n"<<f<<endl;
    // display();
    return 0;
}