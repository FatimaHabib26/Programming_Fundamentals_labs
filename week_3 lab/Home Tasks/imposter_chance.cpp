#include <iostream>
using namespace std;
main() {
cout<<":Enter Imposter(i) count:";
float i;
cin>> i;
cout<<"Enter Player(p) count:";
float p;
cin>> p;
float imposter_chance;
imposter_chance=100*(i/p);
cout<<"The chance of being an Imposter is:"<< imposter_chance <<" % ";
  }