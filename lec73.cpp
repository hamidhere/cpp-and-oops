#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,string> strN;
    strN["hamid"]="raza";
    map<string, string>::iterator itr;
    itr=strN.begin();
    cout<<(*itr).first<<"  "<< (*itr).second<<endl;
    itr=strN.end();

        return 0;
}