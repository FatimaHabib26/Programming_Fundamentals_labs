#include <iostream>
using namespace std;
main() {
cout<<"Enter the person age:";
int person_age;
cin>> person_age;
cout<<"Enter the number of times they've moved:";
int moves;
cin>> moves;
int avg_years;
avg_years=person_age/(moves+1);
cout<<"Average no.of years lived in the same house:"<<avg_years;
  }
