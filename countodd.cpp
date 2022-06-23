#include <iostream>
using namespace std;
class Counter
{
public:
    int min = 5;
    int max = 30;
    void getOdd()
    {
        for (int i = min; i < max; i++)
        {


            if (i%2 != 0 )
            {
                cout<<i<<endl;
                i++;
            }
        }
    }
};

int main()
{
    Counter c;
    c.getOdd();

    return 0;
}