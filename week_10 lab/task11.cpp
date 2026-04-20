#include <iostream>
#include <string>

using namespace std;

string checkAlphabetCase(char ch);

int main()
{
    char input;

    cout << "Enter a character (A or a): ";
    cin >> input;

    cout << checkAlphabetCase(input) << endl;

    return 0;
}

string checkAlphabetCase(char ch)
{
    if (ch == 'A')
        return "You have entered Capital A";
    else
        return "You have entered small A";
}