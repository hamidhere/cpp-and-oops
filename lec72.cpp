#include <iostream>
#include <list>
using namespace std;

void display(list<int> &ls)
{
    list <int>::iterator it;
    for (it=ls.begin();it!=ls.end(); it++)
    {
        /* code */
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main()
{
    list<int> lst1;
    lst1.push_back(8);
    lst1.push_back(24);
    lst1.push_back(13);
    lst1.push_back(5);
    display(lst1);
    // lst1.remove(11);
    // lst1.remove(13);
    lst1.sort();
    cout<<"New list: ";
    display(lst1); 
    list<int> lst2(3);
    list<int>::iterator itr;
    itr = lst2.begin();
    *itr=15;
    itr++;
    *itr=22;
    itr++;
    *itr=22;
    display(lst2);
    lst2.sort();
    cout<<"Sorted list: ";
    display(lst2);
    cout<<"New List2: ";
    lst1.merge(lst2);    
    display(lst1);
    cout<<"Revesing the list: ";
    lst1.remove(22);
    display(lst1);
    
    

    return 0;
}