#include <iostream>
using namespace std;
main() {
cout<<"Enter the movie name:";
string name;
cin>> name;
cout<<"Enter the adult ticket price:$";
float adult_ticket;
cin>> adult_ticket;
cout<<"Enter the child ticket price:";
float child_ticket;
cin>> child_ticket;
cout<<"Enter the number of adult ticket sold:";
float adult_ticket_sold;
cin>> adult_ticket_sold;
cout<<"Enter the number of child ticket sold:";
float child_ticket_sold;
cin>> child_ticket_sold;
cout<<"Enter the percentage of amount to be denoted to charity:";
float charity;
cin>> charity;
float Total_money;
Total_money=(adult_ticket*adult_ticket_sold)+(child_ticket*child_ticket_sold);
float charity_donation;
charity_donation=Total_money*(charity/100);
float Remaining_money;
Remaining_money=Total_money-charity_donation;
cout<<"Total amount generated from ticket sales:$"<<Total_money<<endl;
cout<<"Donation to charity(15%):$"<<charity_donation<<endl;
cout<<"Remaining amount after donation:$"<<Remaining_money;
  }



