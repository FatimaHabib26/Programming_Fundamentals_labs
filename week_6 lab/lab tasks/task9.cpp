#include<iostream>
using namespace std;
main(){
   char word[100];
   cout<<"enter a name: ";
   cin>>word;
   
   for(int i=0;word[i]!='\0';i--){

    cout<<"reversed string: "<<word[i];
   }
}