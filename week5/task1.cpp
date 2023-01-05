#include <iostream>
#include <windows.h>
using namespace std;

int mult5(); 
main(){
int result;
result = mult5();
cout <<"your number multiplied by 5 is : "<< result;

}



int mult5(){
    int number;
cout << "enter number: ";
cin >> number;
number = number*5;

return number;




}