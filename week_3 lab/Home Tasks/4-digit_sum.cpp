#include <iostream>
using namespace std;
main() {
cout<<"Enter a 4-digit number:";
int num;
cin>> num;
int a;
a=num%10;
num=num/10;
int b;
b=num%10;
num=num/10;
int c;
c=num%10;
num=num/10;
int d;
d=num%10;
num=num/10;
int sum;
sum=a+b+c+d;
cout<<"sum of individual digits is:"<<sum;
   }
 
