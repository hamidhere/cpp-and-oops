#include <iostream>
#include <vector>
using namespace std;
template<class T>
void display(vector<T> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        // cout<<V[i]<<" ";
        cout<<V.at(i)<<" ";
    }
}

int main()
{
    vector<int> vec;
    vector<string> vec1(5)ZZ;//Character vector of size 5;
    // vec1.push_back("'HAMID'");    
    // display(vec1);
    // vector<char> vec2(5);
    // vec2.push_back('H');
    // display(vec2);
    vector<int> vec3(5,3);//vec3(NO_OF_Copies, Intger value)
    vector<int>::iterator itr1=vec3.begin();
    vec3.insert(itr1,2,21);//(Iterator_name,N_O_copies,inserting_veriable)
    display(vec3);

    
    // vec.pop_back();
    // vector<int>::iterator itr = vec.end();
    // display(vec);
    // cout << endl;
    // cout<<"Other functions: ";
    // vec.insert(itr-2,3,266);//(Iterator_name,N_O_copies,inserting_veriable)

    return 0;
}