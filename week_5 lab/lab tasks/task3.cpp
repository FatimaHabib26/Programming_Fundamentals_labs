#include <iostream>
using namespace std;
main() {
int n1=0,n2=1,next,n;
cout<<"How many number of Fibonacci Series ypu want to print: ";
cin>> n;
cout<<n1<<", ";
cout<<n2<<", ";
for(int x=1;x<=n;x=x+1)
{
    next=n1+n2;
    cout<<next<<", ";
    n1=n2;
    n2=next;
}
}
