#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string File= "Storing this file 1. ";
    // ofstream out("FileHandling.txt");
    // out<<File;
    string file;
    ifstream in("lec58.cpp");
    // in>> file;

    getline(in,file);
    cout<<file; 
    return 0;
}