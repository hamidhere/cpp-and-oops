#include <iostream>
using namespace std;
// Memory allocation and using arrays in classes
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCoounter(void) { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter Id of your item:" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Set price of your item:" << itemId[counter] << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price for your item " << itemId[i] << " is: " << itemPrice[i] << endl;
    }
}

int main()
{
    shop mart;
    mart.initCoounter();
    mart.setPrice();
    mart.setPrice();
    mart.setPrice();
    mart.setPrice();
    mart.displayprice();

    return 0;
}