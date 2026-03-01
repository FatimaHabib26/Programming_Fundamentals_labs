#include <iostream>
using namespace std;
main() {
cout<<"Enter vegetable price per kilogram:";
float veg_price;
cin>> veg_price;
cout<<"Enter fruit price per kilogram:";
float fruit_price;
cin>> fruit_price;
cout<<"Enter total kilograms of vegetables:";
int veg_weight;
cin>> veg_weight;
cout<<"Enter total kilograms of fruits:";
int fruits_weight;
cin>> fruits_weight;
float earnings_in_coins;
earnings_in_coins=(veg_price*veg_weight)+(fruit_price*fruits_weight);
float earnings_in_rupees;
earnings_in_rupees=earnings_in_coins/1.94;
cout<<"Total earnings in Rupees (Rps) are:"<<earnings_in_rupees;
  }