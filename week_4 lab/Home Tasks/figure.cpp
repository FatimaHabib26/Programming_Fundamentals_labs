#include<iostream>
using namespace std;
main() {
cout<<"Enter the figure type:";
string figure;
cin>> figure;
float s,l,w,b,h,r;
float area;
if(figure=="square"){
cout<<"Enter side:";
float s;
cin>> s;
cin>>s;
area=s*s;
cout<<"Area of square is:"<<area;}
if(figure=="rectangle"){
cout<<"Enter length:";
cin>>l;
cout<<"Enter width:";
cin>>w;
area=l*w;
cout<<"Area of rectangle is:"<<area;}
if(figure=="triangle"){
cout<<"Enter base:";
cin>>b;
cout<<"Enter height:";
cin>>h;
area=1/2*b*h;
cout<<"Area of triangle is:"<<area;}
if(figure=="circle"){
cout<<"Enter radius:";
cin>>r;
area=3.1416*r*r;
cout<<"Area of circle is:"<<area;}
}


