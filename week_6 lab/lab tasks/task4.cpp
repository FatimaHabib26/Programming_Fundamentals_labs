#include <iostream>
using namespace std;
main () {
int num[5];
for(int count=0;count<5;count=count+1)
{
     cout<<"Enter Number: ";
      cin>> num[count];
}
cout<<"The 1st element in array is: "<<num[0]<<endl;
cout<<"The last element in array is: "<<num[4]<<endl;
}


