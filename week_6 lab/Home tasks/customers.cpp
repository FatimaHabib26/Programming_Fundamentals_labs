#include<iostream>
using namespace std;
main() {
char letter;
    int n,count=0;
    cout<<"Enter number of customers: ";
    cin>>n;
    string name[n];
    cout<<"Enter the name of the customers: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,name[i]);
    }
    cout<<"Enter a letter to check: ";
    cin>>letter;
    for(int i=0;i<n;i++)
    {
        if(name[i][0]==letter)
        {
            count++;
        }
    }
    cout<<"Total names that starts with "<<letter<<" are "<<count;
}