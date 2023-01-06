#include <iostream>
using namespace std;
#include <windows.h>
#include <cmath>

string checknumber(int number);

main()
{
system("cls");
int number;
cout << "Enter a 5 digit number: "<<endl;
cin >> number;

string result =checknumber(number);
cout <<"Number is "<<result;

}


string checknumber(int number)
{
   string value;
   int firstdigit, seconddigit, thirddigit,fourthdigit,fifthdigit;
   fifthdigit = number%10;
   number = number/10;
   fourthdigit = number%10;
   number = number/10;  
   thirddigit = number%10;
   number = number/10;
   seconddigit = number/10;
   number = number/10;
   firstdigit = number/10;
   int sum = firstdigit + seconddigit + thirddigit + fourthdigit + fifthdigit;
   if (sum%2==0)
     {
       value = "evenish";
      }  

   if (sum%2!=0)
     {
       value= "oddish";
      }  
   return value;
}