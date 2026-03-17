#include <iostream>
using namespace std;
main() {
int sum=0,num;
cout<<"Enter number until you enter negative number:";
cin>> num;
while(num>=0){
cout<<"You entered :"<<num<<endl;
sum=sum+num;
cout<<"Enter number until you enter a negative number";
cin>>num;
}
cout<<"Program ends because you entered a negative number"<<endl;
cout<<"Sum of numbers is : "<<sum;
}
