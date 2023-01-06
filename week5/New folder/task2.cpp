#include <iostream>
using namespace std;
#include <windows.h>
#include <cmath>

main()
{
int x2coeffcient,xcoeffcient,constantnumber;
float positiveresult, negresult;

cout << "Enter the value of coeffceint X^2 in the equation ";
cin >> x2coeffcient;
cout << "Enter the value of coeffceint X in the equation ";
cin >> xcoeffcient;
cout << "Enter the value of the constant in the equation ";
cin >> constantnumber;
float cons2a = x2coeffcient*2;

positiveresult = -xcoeffcient + sqrt(xcoeffcient*xcoeffcient - 4*x2coeffcient*constantnumber);
positiveresult = positiveresult/cons2a;
cout << "positive root is " << positiveresult<<endl; 

negresult = -xcoeffcient - sqrt(xcoeffcient*xcoeffcient - 4*x2coeffcient*constantnumber);
negresult = negresult/cons2a;
cout << "negative root is " << negresult;

}