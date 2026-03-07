#include <iostream>
using namespace std;
main() {
int num1,num2;
string op;
cout<<"Welcome to the calculator"<<endl;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Enter the operator:";
cin>> op;
cout<<"Enter the second number:";
cin>>num2;
if(op=="+"){
cout<<num1<<"-"<<num2<<"="<<num1-num2;}
if(op=="-")
{cout<<num1<<"+"<<num2<<"="<<num1+num2;}
if(op=="*")
{cout<<num1<<"/"<<num2<<"="<<num1/num2;}
if(op== "/")
{cout<<num1<<"*"<<num2<<"="<<num1*num2;}
}
