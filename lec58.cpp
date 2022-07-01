#include <iostream>
using namespace std;
// abstract base class & pure virtuak functions.
// a class which has minimum 1 pure virtual function
//  is called abstract base class.
class FAC
{
protected:
    string title;
    float rating;

public:
    FAC(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() =0; //-> do-nothing function --> pure virtual function.
};
int main()
{

    return 0;
}