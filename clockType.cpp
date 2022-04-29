#include <iostream>
using namespace std;
class ClockType
{
    int sec, min, hr;
    
public:
    void setTime(int, int, int);
    void getTime(int &, int &, int &) const;
    void printTime();
    void incrementHours();
    void incrementMinutes();
    void incrementSeconds();
    void testTime(const Clocktype &otherClock);
    bool equalTime(const ClockType) const;
};
void Clocktype::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours <= 24)
    {
        hr = hours
    }
    else
    {
        hr = 0
    }
    if (0 <= minutes && minutes <= 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }
    if (0 <= seconds && seconds < 60)
    {
        sec = secconds;
    }
    else
    {
        sec = 0;
    }
}
void Clocktype ::getTime(int &hours, int &minutes, int &seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}
void ClockType ::printTime() const
{
    if (hours < 10)
    {
        cout << 0;
        cout << hr << ":";
    }
    if (minutes < 10)
    {
        cout << 0;
        cout << min << ":";
    }
    if (seconds < 10)
    {
        cout << 0;
        cout << sec;
    }
}
void Clocktype ::incrementHours()
{
    hr++;
    if (hr > 23)
    {
        hr=0;
    }
    
}
void Clocktype ::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min=0;
        incrementHours();
    }
    
}
void Clocktype ::incrementSeconds()
{
    sec++;
    if (sec > 59)
    {
        sec=0;
        incrementMinutes();
    }
    
}
bool ClockType  ::equalTime(const ClockType) const
{
    return(
        hr == otherClock.hr
        && min == otherClock.min
        && sec == otherClock.sec 
    );
}

int main()
{
    int hours,minutes,seconds;
    ClockType myClock;
    ClockType yourClock;
    myClock.setTime(5, 20, 37);
    myClock.printTime();
    yourClock.setTime(x, y, z);
    if (myClock.equalTime(yourClock))

        return 0;
}