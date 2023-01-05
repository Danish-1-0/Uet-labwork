#include <iostream>
#include <windows.h>
using namespace std;

void discountTotal(int red_rose, int white_rose, int tulip);

main(){

int red_rose;
int white_rose;
int tulip;

cout <<"Enter number of red roses bought: ";
cin >> red_rose;
cout <<"Enter number of white roses bought: ";
cin >> white_rose;
cout <<"Enter number of tulips bought: ";
cin >> tulip;




discountTotal(red_rose,white_rose,tulip);




}

void discountTotal(int red_rose, int white_rose, int tulip)
{
	float total = 0;
	total = red_rose*2.0 + white_rose*4.10 + tulip*2.50;
	cout<<"Your grand total is: $"<< total<<endl;
	if (total>200.00)
		{
		cout<<"Your discounted total is : $"<< total*0.80<<endl;
		}






}