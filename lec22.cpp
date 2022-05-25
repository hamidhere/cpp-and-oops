#include <iostream>
#include <string>
using namespace std;
//***Nesting Functions****
class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    void ones_comp(void);
    void display_numbers(void);
};
void binary::read(void)
{
    cout << "Entre a Binary Number:" << endl;
    cin >> s;
}

void binary::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary number! " << endl;
            exit(0);
        }
    }
}

void binary::ones_comp(void)
{
    check_bin();
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
}
void binary::display_numbers(void)
{
    cout << "dispalying your binary numbers" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.check_bin();
    b.ones_comp();
    b.display_numbers();

    return 0;
}