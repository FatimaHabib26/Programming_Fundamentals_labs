#include<iostream>
using namespace std;
int main(){
 int number,n[100];
 cout<<"Enter number of elements: ";
 cin>>number;
 
 cout<<"Enter numbers, one per line: "<<endl;
    for(int i=0;i<number;i++){
    cin>>n[i];
    }int l=n[0];
   for(int i=1;i<number;i++){if(n[i]>l){
    l=n[i];
   }
}
cout<<"largest numbers entered: "<<l<<endl;
}