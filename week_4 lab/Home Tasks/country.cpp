#include <iostream>
using namespace std;
main() {
string country;
float discounted_price,ticket_price;
cout<<"Enter country name:";
cin>>country;
cout<<"Enter ticket price";
cin>> ticket_price;
if (country=="Ireland"){
discounted_price=ticket_price-(ticket_price*0.10);
cout<<"The discounted price is:"<<discounted_price;
}
else{
discounted_price=ticket_price-(ticket_price*0.05);
}
cout<<"The discounted price of"<<country<< "is" <<discounted_price;
}


