#include <iostream>
using namespace std;


main(){
int number;
int sum;
cout << "enter number: " <<endl;
cin >> number;
sum = number%10;
number = number/10;
sum = sum  + number%10;
number = number/10;
sum = sum + number%10;
number = number/10;
sum = sum + number%10;

cout << "Sum is: " << sum;



}