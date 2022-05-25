#include <iostream>
using namespace std;

int main()
{
    /*Arrays*/
    int a = 0, b = 0;
    int marks7[] = {33, 37, 40, 48, 52};
    int marks6[5];

    marks6[0] = 33;
    marks6[1] = 54;
    marks6[2] = 39;
    marks6[3] = 43;
    marks6[4] = 53;
    cout << "Here are 6th smstr marks" << endl;
    cout << marks6[0] << endl;
    cout << marks6[1] << endl;
    cout << marks6[2] << endl;
    cout << marks6[3] << endl;
    cout << marks6[4] << endl;
    // 2nd method to store data
    cout << "7th smstr marks " << endl;
    cout << marks7[0] << endl;
    cout << marks7[1] << endl;
    // you can update the value in an array
    marks7[2] = 20;
    cout << marks7[2] << endl;
    cout << marks7[3] << endl;
    cout << marks7[4] << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << "Marks of 6th smstr of subject " << i << " is " << marks6[i] << endl;
    }
    cout << "         *****************" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << "Marks of 7th smstr of subject " << j << " is " << marks7[j] << endl;
    }
    cout << "         ********Do_While LOOP*********" << endl;
    do
    {

        cout << "Marks of 6th smstr of subject " << a << " is " << marks6[a] << endl;
        a++;
    } while (a < 5);
    // Pointers and arrays
    cout << "         ********Pointers and arrays*********" << endl;
    int *ptr = marks6;
    cout << *(ptr++) << endl;
    cout << *(++ptr) << endl;
    cout << *(ptr++) << endl;
    cout << *(ptr) << endl;
    /* cout<<"Marks of 6th smstr ptr[0] "<<*ptr<<endl;
     cout<<"Marks of 6th smstr ptr[1] "<<*(ptr+1)<<endl;
     cout<<"Marks of 6th smstr ptr[2] "<<*(ptr+2)<<endl;
     cout<<"Marks of 6th smstr ptr[3] "<<*(ptr+3)<<endl;
     cout<<"Marks of 6th smstr ptr[4] "<<*(ptr+4)<<endl;*/

    return 0;
}