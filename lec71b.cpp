#include <iostream>
#include <vector>
// #include <list>
using namespace std;
void printlist(vector<int> &list)
{
    for(auto p: list)
    cout<<p<<" ";
    cout<<endl;
}
void doubleList(vector<int> &list)
{
    for(auto &p: list)
    p = p*2;
    cout<<"list after * byy 2: ";
}

int main()
{
    int i;
    vector<int> intlist;
    intlist.push_back(17);
    intlist.push_back(19);
    intlist.push_back(21);
    intlist.push_back(23);
    intlist.push_back(25);
    cout << "List: ";
    printlist(intlist);
    doubleList(intlist);    
    printlist(intlist);
    
    

    return 0;
}