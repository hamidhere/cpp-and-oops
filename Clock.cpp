#include <iostream>
using namespace std;
class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int &, int &, int &) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType &) const;

private:
    int hr;
    int min;
    int sec;
};
int main()
{
    clockType myClock;
    clockType yourClock;
    int hours;
    int minutes;
    int seconds;

    myClock.setTime(5, 4, 30);     
    cout << "Line 2: myClock: ";   
    myClock.printTime();           // print the time of myClock Line 3
    cout << endl;                  // Line 4
    cout << "Line 5: yourClock: "; // Line 5
    yourClock.printTime();         // print the time of yourClock Line 6
    cout << endl;                  // Line 7

    yourClock.setTime(5, 45, 16);                 // Line 8
    cout << "Line 9: After setting, yourClock: "; // Line 9
    yourClock.printTime();                        // print the time of yourClock Line 10
    cout << endl;                                 // Line 11

    if (myClock.equalTime(yourClock)) // Line 12
       { cout << "Line 13: Both times are equal."<< endl};
    else
        {cout << "Line 15: The two times are not equal."<< endl;};
    cout << "Line 16: Enter the hours, minutes, and "<< "seconds: ";                // Line 16
    cin >> hours >> minutes >> seconds; // Line 17
    cout << endl;                       // Line 18

    myClock.setTime(hours, minutes, seconds); // Line 19
    cout << "Line 20: New myClock: ";         // Line 20
    myClock.printTime();                      // print the time of myClock Line 21
    cout << endl;                             // Line 22
    myClock.incrementSeconds();               // Line 23
    cout << "Line 24: After incrementing myClock by "
         << "one second, myClock: "; // Line 24
    myClock.printTime();             // print the time of myClock Line 25
    cout << endl;                    // Line 26

    myClock.getTime(hours, minutes, seconds); // Line 27

    cout << "Line 28: hours = " << hours
         << ", minutes = " << minutes
         << ", seconds = " << seconds << endl; // Line 28
    return 0;
} // end main
void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}