#include <iostream>
using namespace std;
main () {
int working_days,holidays,playtime,difference,diff_in_hours,diff_in_mins;
cout<<"Enter number of holidays";
cin>> holidays;
working_days=(365-holidays);
playtime=(working_days*63+holidays*127);
difference=30000-playtime;
diff_in_hours=difference/60;
diff_in_mins=diff_in_hours%60;
if(playtime<30000){
cout<<"Tom sleeps well:"<<endl;
cout<<difference<<" minutes or" <<diff_in_hours<<" hours and"<<diff_in_mins<<" minutes less for play"<<endl;
}
else{
cout<<"Tom will run away";
cout<<diff_in_hours<<"hour and"<<diff_in_mins<<"minutes is more for play"<<endl;
}
}
