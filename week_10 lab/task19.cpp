#include <iostream>

using namespace std;

float calculateSalary(float base, int score, int experience);

int main()
{
    float base;
    int score, experience;

    cout << "Enter base salary: ";
    cin >> base;

    cout << "Enter performance score: ";
    cin >> score;

    cout << "Enter years of experience: ";
    cin >> experience;

    float finalSalary = calculateSalary(base, score, experience);

    cout << "Final Salary = " << finalSalary << endl;

    return 0;
}

float calculateSalary(float base, int score, int experience)
{
    float bonusRate = 0;

    if (score >= 90)
        bonusRate = 0.20;
    else if (score >= 75)
        bonusRate = 0.10;
    else
        bonusRate = 0.05;

    if (experience >= 5)
        bonusRate = bonusRate + 0.05;

    float bonus = base * bonusRate;
    float finalSalary = base + bonus;

    return finalSalary;
}
