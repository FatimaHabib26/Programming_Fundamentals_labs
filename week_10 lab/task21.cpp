#include <iostream>

using namespace std;

float calculateBalance(float balance, int years);

int main()
{
    float balance;
    int years;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter years: ";
    cin >> years;

    float updatedBalance = calculateBalance(balance, years);

    cout << "Updated Balance = " << updatedBalance << endl;

    return 0;
}

float calculateBalance(float balance, int years)
{
    float rate = 0;

    if (balance < 10000)
        rate = 0.05;
    else if (balance <= 50000)
        rate = 0.07;
    else
        rate = 0.10;

    if (years >= 3)
        rate = rate + 0.02;

    float interest = balance * rate;
    float finalBalance = balance + interest;

    return finalBalance;
}