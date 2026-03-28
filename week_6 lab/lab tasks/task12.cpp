#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
  cin>>n; 
  int arry[100],y[100]; 
  int count=0;  
    for(int i=0;i<n;i++){
      cout<<"Enter numbers, one per line: ";
    cin>>i;
  bool is=false;
    for (int j=0;j<count;j++){
    if(i==y[j]){
     is=true;
        break;
      }
    }
      if(is){
     cout<<"Already Entered: "<<i<<endl;
      }else{
        y[i]=i;
       count++;
      }
    }cout<<"Unique numbers entered: ";
    for(int j=0;j<count;j++){
cout<<y[j]<<endl;
    }
}