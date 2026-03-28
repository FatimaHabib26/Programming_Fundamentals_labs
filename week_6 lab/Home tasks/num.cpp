#include <iostream>
using namespace std;
main () {
int n;
cout << "Enter the number of elements: ";
cin>> n;
int num[n],large,small;
cout<<"Enter the numbers: "<<endl;
for(int i =0;i<n;i++){
cin>>num[i];
}
large=num[0];
small=num[0];
for(int i=0;i<n;i++)
{if(num[i]>large)
{
large=num[i];
}
if(num[i]<small)
{
     small=num[i];
}
}
cout<<"Large number is: "<<large<<endl;
cout<<"Small number is: "<<small<<endl;
}
