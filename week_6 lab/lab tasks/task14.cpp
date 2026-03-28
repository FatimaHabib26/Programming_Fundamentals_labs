#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of resistors in series circuit: ";
    cin>>n;
    float resistance[n],sum=0;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter the resistance values in ohm ";
    cin>>resistance[i];
    sum=sum+resistance[i];
    }
    cout<<"total resistance is "<<sum<<"ohm";
}