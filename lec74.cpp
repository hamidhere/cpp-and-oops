#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int arr[] = {2, 5, 3, 9, 1, 15};
    sort(arr, arr + 6, less<int>());//[first,last)
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}