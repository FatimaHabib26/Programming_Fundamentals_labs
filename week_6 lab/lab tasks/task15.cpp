#include<iostream>
using namespace std;
main()
{
    int thingsNum[100];
    float amountdue;
    cout<<"Enter quartes ";
    cin>>thingsNum[0];
    cout<<"Enter dimes ";
    cin>>thingsNum[1];
    cout<<"Enter nickels ";
    cin>>thingsNum[2];
    cout<<"Enter pennies ";
    cin>>thingsNum[3];
    float amount=thingsNum[0]*0.25+thingsNum[1]*0.10+thingsNum[2]*0.05+thingsNum[3]*0.01;
    cout<<"Enter total amount due in dollars: "<<amount<<endl;
    cout<<"enter the amount due ";
    cin>>amountdue;
        if(amount>=amountdue)
        {
            cout<<"can you pay amount? YES!";
        }
        else
        {
            cout<<"can you pay amount? NO!";
        }
}