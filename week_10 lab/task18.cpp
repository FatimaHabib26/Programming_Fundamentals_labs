#include <iostream>

using namespace std;

float taxCalculator(char type, float price);

int main()
{
    char type;
    float price;

    cout << "Enter vehicle type (M/E/S/V/T): ";
    cin >> type;

    cout << "Enter vehicle price: ";
    cin >> price;

    float finalPrice = taxCalculator(type, price);

    cout << "The final price on a vehicle of type " << type;
    cout << " after adding the tax is $" << finalPrice << "." << endl;

    return 0;
}

float taxCalculator(char type, float price)
{
    float taxRate = 0;

    if (type == 'M')
        taxRate = 0.06;
    else if (type == 'E')
        taxRate = 0.08;
    else if (type == 'S')
        taxRate = 0.10;
    else if (type == 'V')
        taxRate = 0.12;
    else if (type == 'T')
        taxRate = 0.15;

    float taxAmount = price * taxRate;
    float finalPrice = price + taxAmount;

    return finalPrice;
}