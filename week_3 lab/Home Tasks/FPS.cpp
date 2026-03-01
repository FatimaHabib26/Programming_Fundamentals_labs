#include <iostream>
using namespace std;
main() {
cout<<":Enter the number of minutes:";
int minutes;
cin>> minutes;
cout<<"Enter frames per second(FPS):";
int FPS;
cin>> FPS;
int Total_frames;
Total_frames=minutes*60*FPS;
cout<<"The total number of frames are:"<<Total_frames;
  }
 