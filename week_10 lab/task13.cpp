#include <iostream>
#include <string>

using namespace std;

string OddishOrEvenish(int num);

int main()
{
    int number;

    cout << "Enter a 5-digit number: ";
    cin >> number;

    cout << OddishOrEvenish(number) << endl;

    return 0;
}

string OddishOrEvenish(int num)
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += num % 10;
        num /= 10;
    }

    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}