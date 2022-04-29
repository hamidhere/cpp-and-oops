#include <iostream>
using namespace std;
int main() {
// ****selection control structures if, else-if, else ladder****** 
    int qualification;
    cout<<"Enter you Qualification:"<<endl;
    cin >> qualification ;
   /* if (qualification <= 10)
        {
            cout<<"You are not eligible for this post"<<endl;
                    }
    else if (qualification<=12)
    {   
            cout<<"You will be heired as freshy"<<endl;
    }
    else 
    {
        cout<<"Welcome you are in!"<<endl;
        
            }*/    

    switch (qualification)
    case 10:
    {cout<<"You are not eligible for this post"<<endl;
    break;
    
    default:
    cout<<"you are eligible for this post."<<endl;
    break;
    }
    cout<<"Done with qualification process"<<endl;
    return 0;
}