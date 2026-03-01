#include <iostream>
using namespace std;
main() {
cout<<":Enter initial velocity (m/s) :";
int initial_velocity;
cin>> initial_velocity;
cout<<"Enter accelerarion (m/s^2):";
int acceleration;
cin>> acceleration;
cout<<"Enter time(s):";
int time;
cin>> time;
int Final_velocity;
Final_velocity=initial_velocity+(acceleration*time);
cout<<"The final velocity is:"<<Final_velocity<<"m/s";
  }

