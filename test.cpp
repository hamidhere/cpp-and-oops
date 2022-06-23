#include <iostream>
using namespace std;

int main()
{
    int first[] = {1,3,4, 2, 3};
    int second[] = {4, 5};
 
    int m = sizeof(first) / sizeof(*first);
    int n = sizeof(second) / sizeof(*second);
 
    int result[m + n];
    copy(first, first + m, result);
    copy(second, second + n, result + m);
 
    for (int &i: result) {
        cout << i << ' ';
    }
 
    return 0;
}
