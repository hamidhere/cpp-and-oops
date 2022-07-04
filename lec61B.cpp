#include <iostream>
#include <fstream>
using namespace std;
// reading and writing from a file. 
int main()
{
    ofstream hout("FH.txt");
    string data;
    cout<<"Enter data:";
    cin>>data;
    hout<<"My name is: "<<data;
    // getline(data,hout);
    hout.close();
    ifstream hin("FH.txt");
    string get;
    getline(hin,get);
    hin>>get;
    cout<<"Name stored in the file is: "<<get<<endl;
    hin.close();
    return 0;
}