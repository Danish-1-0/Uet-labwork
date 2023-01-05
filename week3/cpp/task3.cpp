#include <iostream>
using namespace std;

main(){
float initialvelocity;
float acceleration;
float time;
float finalvelocity;

cout << "enter initial velocity in m/s: ";
cin >> initialvelocity;
cout <<  "enter acceleration in m/s^2";
cin >> acceleration;
cout << "enter time in minutes" << endl;
cin >> time;

finalvelocity = (acceleration * time ) + initialvelocity;
cout << "final velocity in m/s is "<< finalvelocity << endl;





}