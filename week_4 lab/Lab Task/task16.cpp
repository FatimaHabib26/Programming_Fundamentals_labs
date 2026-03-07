#include <iostream>
using namespace std;
main() {
string a,b,c;
int e,f,g;
cout<<"Enter the name of first brother: ";
cin>>a;
cout<<"Enter the age of firstbrother: ";
cin>>e;
cout<<"Enter the name of second brother: ";
cin>>b;
cout<<"Enter the age of second brother: ";
cin>>f;
cout<<"Enter the name of third brother:";
cin>>c;
cout<<"Enter the age of third brother: ";
cin>>g;
if(e<f)
{if(e<g)
{cout<<a<<"is youngest";}}
if(f<e)
{if(f<g)
{cout<<b<<"is youngest";}}
if(g<e)
{if(g<f)
{cout<<c<<" is youngest";}}
}