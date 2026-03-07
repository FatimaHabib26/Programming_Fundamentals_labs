#include <iostream>
using namespace std;
main() {
float bill,discounted_bill;
cout<<"Enter your bill :" ;
cin>> bill;
if(bill<=5000){
// Apply 5% dicount
discounted_bill=bill-(bill*0.05);
}
else {
// Apply 10% dicount
discounted_bill=bill-(bill*0.10);
}
cout<<"Your discounted bill is:"<<discounted_bill;
}
