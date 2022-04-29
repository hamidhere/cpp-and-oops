#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    int ones_comp();
};
void binary::read(void)
{
    cout << "Entre a Binary Number: " << endl;
    cin >> s;
}
int binary::ones_comp()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    return ones_comp;
}
int main()
{
    binary b;
    b.read();
    b.ones_comp();

    return 0;
}