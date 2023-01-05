#include <iostream>
#include <windows.h>
using namespace std;

void sleptWell(int holidays);

main(){

int holidays;

cout <<"Enter number of holidays this year: ";
cin >> holidays;




sleptWell(holidays);




}

void sleptWell(int holidays)
{
	int workdays;
	int total_playtime;
	workdays = 365-holidays;
	total_playtime = workdays*63 + holidays*127;
	cout << "Total playtime this year was: "<<total_playtime<<endl;
	int difference = 30000-total_playtime;
	int differencehrs = difference/60;
	int differencemins = difference%60;
	if (total_playtime>30000)
		{
		cout<<"Tom cat will run away"<<endl;
		cout<<"playtime was "<<differencehrs;
		cout<<" hours and  "<<differencemins;
		cout<<" minutes higher than norm"<<differencehrs;
		}
	if (total_playtime<=30000)
		{
		cout<<"Tom cat slept well"<<endl;
		cout<<"playtime was "<<differencehrs;
		cout<<" hours and  "<<differencemins;
		cout<<" minutes lower than norm ";
		}






}