#include <iostream>
using namespace std;
#include <windows.h>
#include <cmath>





float heightfind(float radangle, float base);

main()
{
system("cls");
float height;
float radangle,base,angle;

cout << "Enter angle: ";
cin >> angle;
cout << "Enter base: ";
cin >> base;
radangle = angle/360 *2*3.142;
radangle = tan(radangle);


height = heightfind(radangle, base);

cout << "height is "<< height;



}


float heightfind(float radangle, float base)
{
	float height;
	height = radangle*base;

	return height;

}
















/*cout << min(number1,number2) << " is the minimum number"<<endl;
cout << pow(number1,number2) << " is the first number to the power of second number"<<endl;
cout << cbrt(number1) << " is cube root of the first number"<<endl;
cout << cbrt(number2) << " is cube root of the second number"<<endl;
cout << ceil(number3) << " is the ceiling of the third number "<<endl;
cout << floor(number3) << " is the floor of the third number "<<endl;
*/