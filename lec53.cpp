#include <iostream>
using namespace std;
class A
{
    int hami;
    public:
    A& setData(int hami)
    {
        
        this->hami = hami;
        return *this;

    }
    void getData()
    {
        cout<<"Age of Hami is:"<<hami<<endl;
    }
};
int main()
{
    A hami;
    hami.setData(22).getData();
    // hami.getData();

    return 0;
}