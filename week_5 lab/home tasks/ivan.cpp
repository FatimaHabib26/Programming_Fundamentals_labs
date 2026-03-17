#include<iostream>
using namespace std;
main()
{
    int money,year,spend_money=0,age;
    cout<<"Enter money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>year;
    age=18;
    for(int y=1800;y<=year;y++)
    {
    if(y%2==0)
    {
      spend_money=spend_money+12000;
    }
    else
    {
        spend_money+=12000+50*age;
    }
    age++;
    }
    if(spend_money<=money)
    {
        int remaining=money-spend_money;
        cout<<"MONEY IS ENOUGH "<<remaining;
    }
    else
    {
        int sufficient=spend_money-money;
        cout<<"MONEY IS NOT ENOUGH "<<sufficient;
    }
}