#include <iostream>
using namespace std;
main(){
string w;
    cout<<"enter word: ";
    cin>>w;

    for(int i=0;w[i]!='\0';i++){
        char next=w[i]+1;
        cout<<"shifted string is: "<<next<<endl; 
    }
}