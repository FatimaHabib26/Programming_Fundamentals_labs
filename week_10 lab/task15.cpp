#include <iostream>

using namespace std;

void calculatePoolState(int V, int P1, int P2, double H);

int main()
{
    int V, P1, P2;
    double H;

    cout << "Enter pool volume (V): ";
    cin >> V;

    cout << "Enter pipe 1 rate (P1): ";
    cin >> P1;

    cout << "Enter pipe 2 rate (P2): ";
    cin >> P2;

    cout << "Enter hours (H): ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);

    return 0;
}

void calculatePoolState(int V, int P1, int P2, double H)
{
    double totalWater = (P1 + P2) * H;

    if (totalWater <= V)
    {
        double poolPercent = (totalWater / V) * 100;
        double pipe1Percent = ((P1 * H) / totalWater) * 100;
        double pipe2Percent = ((P2 * H) / totalWater) * 100;

        cout << "The pool is " << (int)poolPercent << "% full. ";
        cout << "Pipe 1: " << (int)pipe1Percent << "%. ";
        cout << "Pipe 2: " << (int)pipe2Percent << "%." << endl;
    }
    else
    {
        double overflow = totalWater - V;

        cout << "For " << H << " hours the pool overflows with ";
        cout << overflow << " liters." << endl;
    }
}