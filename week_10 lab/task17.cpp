#include <iostream>

using namespace std;

void pyramidVolume(double l, double w, double h, string unit);

int main()
{
    double l, w, h;
    string unit;

    cout << "Enter length (meters): ";
    cin >> l;

    cout << "Enter width (meters): ";
    cin >> w;

    cout << "Enter height (meters): ";
    cin >> h;

    cout << "Enter output unit (mm/cm/m/km): ";
    cin >> unit;

    pyramidVolume(l, w, h, unit);

    return 0;
}

void pyramidVolume(double l, double w, double h, string unit)
{
    double volume = (l * w * h) / 3;
    double result = volume;

    if (unit == "mm")
        result = volume * 1000000000;
    else if (unit == "cm")
        result = volume * 1000000;
    else if (unit == "km")
        result = volume / 1000000000;

    cout << "Volume: " << result << " cubic " << unit << endl;
}