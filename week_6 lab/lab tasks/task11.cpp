#include <iostream>
using namespace std;
main(){
    int num;
int n[100];
cout<<"Enter a number: ";
cin>>num;
for(int i=1;i<num;i++){
    cout<<"Enter "<<num<<" numbers, one per line: "<<i<<endl; 
}
for(int j=num-1;j>=0;j--){
    cout<<"Numbers in reverse order: "<<j<<endl;
}
}