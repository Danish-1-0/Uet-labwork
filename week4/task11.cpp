#include <iostream>
#include <windows.h>
using namespace std;

void speedcheck(int speed);

main(){

int speed;

cout <<"Enter Speed: ";
cin >> speed;


speedcheck(speed);




}

void speedcheck(int speed)
{
	if(speed>100)
		{
		cout << "Halt….YOU WILL BE CHALLENGED!!! "<<endl;
		}
	if(speed<=100)
		{
		cout << "Perfect! You're going good. "<<endl;
		}







}