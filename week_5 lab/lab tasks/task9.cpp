#include <iostream>
using namespace std;
main() {
int value;
cout<<"Please enter a positive number";
cin>> value;
while (value<=0)
{
 cout<<"Error:"<<value<<" is noat apositive number."<<endl;
 cout<<"Please enter a positive number:";
 cin>> value;
}
cout<< "Program Ends" <<endl;
}