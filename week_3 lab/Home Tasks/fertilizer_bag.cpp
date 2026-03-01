#include <iostream>
using namespace std;
main() {
cout<<":Enter the weight of the fertilizer bag in pounds:";
int weight_of_bag;
cin>> weight_of_bag;
cout<<"Enter the cost of the bag:$";
float cost_of_bag;
cin>> cost_of_bag;
float cost_per_pound;
cost_per_pound=cost_of_bag/weight_of_bag;
cout<<"Enter the area in square feet that can be covered by the bag:";
float area_covered_by_bag;
cin>> area_covered_by_bag;
float cost_per_square_foot;
cost_per_square_foot=cost_of_bag/area_covered_by_bag;
cout<<"The cost of fertilizer per pound is $:"<<cost_per_pound<<endl;
cout<<"The cost of fertilizer per square foot is $:"<<cost_per_square_foot<<endl;
   }

