#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string r;
    ifstream read("FileHandlingB");
    read>>r;
    cout<<r;

    return 0;
}