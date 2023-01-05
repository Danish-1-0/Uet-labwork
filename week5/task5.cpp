#include <iostream>
#include <windows.h>
using namespace std;


main(){
    int minutes;
    int hours;
    int total_minutes;

cout <<"Enter current time in hours: ";
cin >> hours;
cout <<"Enter current time in minutes: ";
cin >> minutes;
total_minutes = minutes + (hours*60) + 15;
hours = total_minutes/60;
minutes = total_minutes%60;
if (hours > 23){
    hours = hours - 24;
}
cout << "Time after 15 minutes will be: " << hours << ":"<<minutes;

}