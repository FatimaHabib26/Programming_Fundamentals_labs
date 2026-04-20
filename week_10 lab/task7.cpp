#include <iostream>
#include <cmath>

using namespace std;

double calculateHeight(double distance, double angleDegrees)
{
    double angleRadians = angleDegrees / 57.2958;
    double height = distance * tan(angleRadians);
    return height;
}

int main()
{
    double distance, angle, height;

    cout << "Enter distance from tree (in feet): ";
    cin >> distance;

    cout << "Enter angle of elevation (in degrees): ";
    cin >> angle;

    height = calculateHeight(distance, angle);

    cout << "Height of the tree is: " << height << " feet" << endl;

    return 0;
}