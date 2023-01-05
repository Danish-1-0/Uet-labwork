#include <iostream>
#include <windows.h>
using namespace std;

void checkEqual(int number1, int number2);

main(){
system("cls");
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the first number: ";
cin >> number2;
checkEqual(number1, number2);

 





}


void checkEqual(int number1, int number2)
{
if (number1 == number2)
	{
	cout<< "True "<<endl;
	}
if (number1 != number2)
	{
	cout<< "False "<<endl;
	}


}