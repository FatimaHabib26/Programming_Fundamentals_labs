#include <iostream>
using namespace std;
main() {
cout<<"Enter the current population:";
int current_population;
cin>>current_population;
cout<<"Enter the monthly birth rate (number of births per month):";
int monthly_BirthRate;
cin>>monthly_BirthRate;
int Population_in_three_decades;
Population_in_three_decades=current_population+(monthly_BirthRate*360);
cout<<"The population in three decades will be"<<Population_in_three_decades;
  }

