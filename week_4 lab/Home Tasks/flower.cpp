#include <iostream>
using namespace std;
main () {
int red,white,tulips;
cout<<"Enter red roses:";
cin>> red;
cout<<"Enter white roses:";
cin>> white;
cout<<"Enter tulips:";
cin>> tulips;
float price,discount;
price=(red*2)+(white*4.10)+(tulips*2.50);
cout<<"original price:"<<price <<endl;
float final_price;
if(price>200){
discount=price*0.20;
final_price=price-discount;
cout<<"price after discount:"<<final_price;
}
}