#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number1, number2;
    cout<<"Enter Number 1:";
    cin>> number1;
    cout<<"Enter number 2:";
    cin>> number2;
    cout<< "Minimum Number:"<< min(number1, number2);
    return 0;
}