#include <iostream>
using namespace std;
class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 10, int c=22 )
    {
        data1 = a;
        data2 = b;
        data3 = c;
     
    }
      void printdata();
   
};
 void Simple ::printdata()
    {
        cout << "Values stored in a,b and c are: " << data1<<" , " << data2 <<" , "<< data3 << endl;
    }
int main()
{
    Simple o(7);
    o.printdata();

    return 0;
}