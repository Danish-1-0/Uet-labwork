#include <iostream>
#include <windows.h>
using namespace std;

void checkEqual(string string1);

main(){
system("cls");
string string1;

cout << "Enter True/false: ";
cin >> string1;
checkEqual(string1);

 





}


void checkEqual(string string1)
{
if (string1 == "true")
	{
	cout<< "false"<<endl;
	}
if (string1 == "false")
	{
	cout<< "true "<<endl;
	}


}