#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int x, float y)
    {
        id = x;
        price = y;
    }
    void printData()
    {
        cout << "ID of the Item is:" << id << endl;
        cout << "Price of the item is:" << price << endl;
    }
};
int main()
{
    int p, i;
    float q;
    int size = 4;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    for (i = 0; i < size; i++)
    {
        /* code */
        cout << "Enter ID and price of the item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        /* code */
        cout<<"Item number "<<i+1<<endl;
        ptrtemp->printData();
        ptrtemp++;


    }
    

    return 0;
}