#include <iostream>
using namespace std;
main() {
cout<<"Enter imposters (i) :";
int i;
cin>>i;
cout<<"Enter players (p) :";
int p;
cin>>p;
int chance;
chance=100*(i/p);
cout<<"Chances of being an imposter is:"<<chance;
  }

