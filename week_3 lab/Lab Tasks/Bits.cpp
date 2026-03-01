#include <iostream>
using namespace std;
main() {
cout<<"Enter the size in megabytes (MB):";
int megabytes;
cin>> megabytes;
float bits;
bits=megabytes*1024*1024*8;
cout<<" 3 megabytes is equivalent to :"<<bits<<"in bits";
  }
