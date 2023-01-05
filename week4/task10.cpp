#include <iostream>
#include <windows.h>
using namespace std;

void discount(string country, float price);

main(){
string country;
float price;
cout <<"Enter country name (lowercase only): ";
cin >> country;
cout <<"Enter Ticket price: ";
cin >> price;

discount(country, price);




}

void discount(string country, float price)
{
	if(country=="pakistan")
		{
		cout << "Discounted ticket price is:$ " << price*0.95<<endl;
		}
	if(country=="ireland")
		{
		cout << "Discounted ticket price is:$ " << price*0.90<<endl;
		}
	if(country=="india")
		{
		cout << "Discounted ticket price is:$ " << price*0.80<<endl;
		}
	if(country=="england")
		{
		cout << "Discounted ticket price is:$" << price*0.70<<endl;
		}
	if(country=="canada")
		{
		cout << "Discounted ticket price is:$ " << price*0.55<<endl;
		}






}