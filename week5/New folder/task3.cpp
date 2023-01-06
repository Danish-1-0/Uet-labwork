#include <iostream>
using namespace std;
#include <windows.h>
#include <cmath>

bool issymmetrical(int number);

main()
{
system("cls");
int number;
cout << "Enter a 3 digit number: "<<endl;
cin >> number;

bool result = issymmetrical(number);
if (result == true){
      cout << "is symmetrical";
       }
if (result == false){
      cout << "not symmetrical";
       }

}


bool issymmetrical(int number)
{
   int firstdigit, seconddigit, thirddigit;
   thirddigit = number%10;  
   firstdigit = number/100;
   if (firstdigit != thirddigit)
     {
       return false;
      }  

   return true;
	}