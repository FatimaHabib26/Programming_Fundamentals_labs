#include <iostream>
#include <string>

using namespace std;

string timeTravel(int hours, int minutes);

int main()
{
    int hours, minutes;

    cout << "Enter current time (hours 0-23): ";
    cin >> hours;

    cout << "Enter current time (minutes 0-59): ";
    cin >> minutes;

    cout << "Future time: " << timeTravel(hours, minutes) << endl;

    return 0;
}

string timeTravel(int hours, int minutes)
{
    minutes = minutes + 15;

    if (minutes >= 60)
    {
        minutes = minutes - 60;
        hours = hours + 1;
    }

    if (hours >= 24)
    {
        hours = 0;
    }

    string hh = to_string(hours);
    string mm = to_string(minutes);

    if (hours < 10)
        hh = "0" + hh;

    if (minutes < 10)
        mm = "0" + mm;

    return hh + ":" + mm;
}