#include <iostream>
using namespace std;
main() {
cout<<"Enter number of squares you can paint:";
int n;
cin>> n;
cout<<"Enter the single wall widths(w):";
int w;
cin>> w;
cout<<"Enter the single wall heights(h):";
int h;
cin>> h;
int walls_painted;
walls_painted=n/(w*h);
cout<<"Number of walls that can be painted:"<<walls_painted;
  }


