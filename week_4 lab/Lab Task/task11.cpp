#include <iostream>
using namespace std;
main () {
string My_password, user_enter;
My_password="Pass@123!";
cout<<"Enter the password:";
cin>> user_enter;
if ( user_enter == My_password ){
cout<<"Wow ! You have cracked the code!";
}
else{
cout<<"It is not that simple, Try Again";
}
}