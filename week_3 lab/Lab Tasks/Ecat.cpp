#include <iostream>
using namespace std;
main() {
cout<<"Enter the student name:";
string name;
cin>> name;
cout<<"Enter matriculation marks (out of 1100):";
float matric;
cin>> matric;
cout<<"Enter intermediate marks (out of 550):";
float inter;
cin>> inter;
cout<<"Enter your ecat marks (out of 400):";
float ecat;
cin>> ecat;
float aggregate;
aggregate=(matric/1100.0*10)+(inter/550.0*40)+(ecat/400.0*50);
cout<<"The aggregate of ECAT is:"<<aggregate;
  }


