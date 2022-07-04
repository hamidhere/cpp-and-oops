#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream write("FH.txt");    
    string s;
    cout<<"Enter Your name:";
    cin>>s;
    getline(s,write);
    write.close();
    // write the data type in which u wnat to read/write data.  
    string r;
    // using ifstream class with object name read(file-name )
    ifstream read("FH.txt");
    // getline function to read the whole line of code.
    getline(read, r);
    cout << r;
    read.close();

    return 0;
}