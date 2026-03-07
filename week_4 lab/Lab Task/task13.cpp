#include <iostream>
using namespace std;
main() {
int salary=10000;
int laptop_price=50000;
int months=6;
int adv_salarypercent=50;
int total_salary=(salary*50/100)*months;
if(total_salary>=laptop_price){
cout<<"You can purchase a laoptop";
}
if(total_salary<laptop_price){
int req_months=laptop_price/(salary*50/100);
cout<<"Months required to buy a loptop:"<<req_months;
}
}
