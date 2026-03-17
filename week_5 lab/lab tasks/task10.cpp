#include <iostream>
using namespace std;
main () {
int n1,n2,HCF;
cout<<"Enter first number:";
cin>>n1;
cout<<"Enter second number:";
cin>>n2;
int a=n1,b=n2;
while(HCF!=0){
HCF=n1%n2;
}
HCF=a;
int LCM=(n1*n2)/HCF;
cout<<"HCF of " <<n1<<"and "<<n2<<" is "<<HCF<<endl;
cout<<"LCM of " <<n1<<"and "<<n2<<" is "<<LCM<<endl;
}
