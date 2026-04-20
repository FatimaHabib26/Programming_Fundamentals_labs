#include <iostream>
#include <cmath>

using namespace std;

void calculateRoots(double a, double b, double c);

int main()
{
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    calculateRoots(a, b, c);

    return 0;
}

void calculateRoots(double a, double b, double c)
{
    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Two real and distinct roots:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);

        cout << "One real root:\n";
        cout << "Root = " << root << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);

        cout << "Complex roots:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}