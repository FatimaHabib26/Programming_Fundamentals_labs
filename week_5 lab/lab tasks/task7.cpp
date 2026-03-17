#include <iostream>
using namespace std;
main () {
int number,digit,count=0;
cout<<"Enter a number: ";
cin>>number;
cout<<"Enter digit: ";
cin>>digit;
for(;number!=0;number=number/10)
{
if(number%10==digit)
{
 count=count+1;
}
}
cout<<"Frequency of "<<digit<<"  is :"<<count;
}