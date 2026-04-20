#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int base_number, exponent;
cout<<"Enter the base number:";
cin>>base_number;
cout<<"Enter the exponent:";
cin>>exponent;
 pow (base_number,exponent);
cout<<base_number<<" raised to the power"<<exponent<<" is:"<<pow(base_number, exponent);
return 0;
}