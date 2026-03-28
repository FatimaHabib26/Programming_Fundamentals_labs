#include<iostream>
using namespace std;
main(){
int num[5];
for(int i=0;i<5;i++){
    cout<<"enter number: ";
    cin>>num[i];
}
cout<<"first element of array is: "<<num[0]<<endl;
cout<<"last element of array is: "<<num[4]<<endl;
}