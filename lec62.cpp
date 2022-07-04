#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//open() and eof() function. 
int main()
{
    ofstream out;
    out.open("FH2.txt");
    out << "modifying and writing in a file." << endl;
    out << "modifying and writing in a file." << endl;
    out << "modifying and writing in a file." << endl;
    out << "modifying and writing in a file." << endl;
    out << "modifying and writing in a file." << endl;
    out.close();
    ifstream read;
    string st;
    read.open("lec60.cpp");
    while (read.eof()==0)
    {
        getline(read, st);
        cout<<st<<endl;
    }
    read.close();
    return 0;
}