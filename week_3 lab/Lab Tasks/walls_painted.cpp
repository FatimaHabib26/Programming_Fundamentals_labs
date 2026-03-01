#include <iostream>
using namespace std;
main() {
cout<<"Enter paint area(n):";
int n;
cin>> n;
cout<<"Enter the wall widths(w):";
int w;
cin>> w;
cout<<"Enter the wall heights(h):";
int h;
cin>> h;
int walls_painted;
walls_painted=n/(w*h);
cout<<"Number of walls that can be painted:"<<walls_painted;
  }


