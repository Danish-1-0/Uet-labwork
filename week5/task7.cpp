#include <iostream>
#include <windows.h>
using namespace std;

float percentcontributed(float pipeflow, float hours, float volumefilled);

main(){
float pipe1flow, pipe2flow, totalvolume, hours, volumefilled;
cout << "Enter the total volume of the pool: ";
cin >> totalvolume;
cout << "Enter the rate of flow of pipe 1: ";
cin >> pipe1flow;
cout << "Enter the rate of flow of pipe 2: ";
cin >> pipe2flow;
cout << "Enter the number of hours the worker was absent for: ";
cin >> hours;

volumefilled = (pipe1flow * hours) + (pipe2flow*hours);
if (volumefilled < totalvolume){
    float percentfilled = volumefilled/totalvolume;
    cout << "The fool was " << percentfilled*100 << " % filled"<<endl;
    cout << "Pipe 1 contributed: "<<percentcontributed(pipe1flow,hours,volumefilled)<<" %"<<endl;; 
    cout << "Pipe 2 contributed: "<<percentcontributed(pipe2flow,hours,volumefilled)<<" %"; 
}
if (volumefilled > totalvolume){
    cout << "For "<<hours<<" hours the pool overflowed by "<<volumefilled-totalvolume<<" litres";
}

}


float percentcontributed(float pipeflow, float hours, float volumefilled){ 
    int volume = pipeflow * hours;
    return (volume/volumefilled)*100;




}
