#include <iostream>
using namespace std;
template <class T>
class Hami
{
public:
    T a;
    Hami(T x)
    {
        a = x;
        cout << "a assigned:" << endl;
    }
    void display();
};
template <class T>
void Hami<T>::display()
{
    cout << a << endl;
}
void fun(int b)
{
    cout << b << endl;
}
template <class D>
void fun(D y)
{
    cout<<"Template:";
    cout<<y<<endl;
}

int main()
{
    // Hami<char> h('L');
    //  Hami<string> h("Leon");
    //  h.display();
    // fun(20);
    fun<int>(30);
    fun<char>('H'); 

    return 0;
}