#include <iostream>

using namespace std;

bool isSymmetrical(int num);

int main()
{
    int number;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    if (isSymmetrical(number))
        cout << "True: Number is symmetrical" << endl;
    else
        cout << "False: Number is not symmetrical" << endl;

    return 0;
}

bool isSymmetrical(int num)
{
    int last = num % 10;
    int first = num / 100;

    if (first == last)
        return true;
    else
        return false;
}