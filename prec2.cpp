#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {6, 7, 8, 9};
    for (auto elements : &vec1 )
    {
        cout<<elements<<" ";
    }
    for (auto &p : vec1)
    {
        p=p*2;
        cout<<"Doubled:"<<" ";
    }


    return 0;
}