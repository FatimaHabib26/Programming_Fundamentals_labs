#include<iostream>
using namespace std;
main()
{
    int age,machineprice,toyprice;
    cout<<"Enter lilly age: ";
    cin>>age;
    cout<<"Enter price of machine: ";
    cin>>machineprice;
    cout<<"Enter price of each toy: ";
    cin>>toyprice;
    int gift_money=10,saved_money=0,toy=0;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
   saved_money+=(gift_money-1);
   gift_money+=10;
        }
    else
    { toy=toy+1;}
    }
    int toymoney=toy*toyprice;
    int total_moneysaved=toymoney+saved_money;
    if(machineprice<=total_moneysaved)
    {
    cout<<"YES ";
  int remaining=total_moneysaved-machineprice;
  cout<<"remanining money "<<remaining;
    }
    else
   { cout<<"NO ";
 int insufficient_money=machineprice-total_moneysaved;
 cout<<" you do not have enough money "<<insufficient_money;}
}