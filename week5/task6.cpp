#include <iostream>
#include <windows.h>
using namespace std;

string digit1Totext(int digit1);
string digit2Totext(int digit2);
string singledigit(int digit2);
main()
{
    int number,digit1,digit2;
    cout <<"Enter your number: ";
    cin >> number;

    digit2 = number%10;
    digit1 = number/10;
    if (digit1 == 0){
        cout << "The number entered is "<<singledigit(digit2);
    }
    if (digit1 == 1){
    cout<< "invalid input ";
    } 
    if (digit1>1){
    cout << "The number entered is " <<digit1Totext(digit1)<<" "<<digit2Totext(digit2);
    }
    

}

string singledigit(int digit2)
{
    if (digit2==0)
    {
        return "invalid";
    }
    if (digit2==1)
    {
        return "one";
    }
    if (digit2==2)
    {
        return "two";
    }
    if (digit2==3)
    {
        return "three";
    }
    if (digit2==4)
    {
        return "four";
    }
    if (digit2==5)
    {
        return "five";
    }
    if (digit2==6)
    {
        return "six";
    }
    if (digit2==7)
    {
        return "seven";
    }
    if (digit2==8)
    {
        return "eight";
    }
    if (digit2==9)
    {
        return "nine";
    }
}


string digit1Totext(int digit1)
{
    if (digit1==1)
    {
        return "invalid";
    }    
    if (digit1 == 2){
        return "twenty";
    }
    if (digit1 == 3){
        return "thirty";
    }
    if (digit1 == 4){
        return "forty";
    }
    if (digit1 == 5){
        return "fifty";
    }
    if (digit1 == 6){
        return "sixty";
    }
    if (digit1 == 7){
        return "seventy";
    }
    if (digit1 == 8){
        return "eighty";
    }
    if (digit1 == 9){
        return "nintey";
    }

    
}


string digit2Totext(int digit2)
{
    if (digit2 == 1)
    {
        return "one";
    }
    if (digit2 == 2)
    {
        return "two";
    }
    if (digit2 == 3)
    {
        return "three";
    }
    if (digit2 == 4)
    {
        return "four";
    }
    if (digit2 == 5)
    {
        return "five";
    }
    if (digit2 == 6)
    {
        return "six";
    }
    if (digit2 == 7)
    {
        return "seven";
    }
    if (digit2 == 8)
    {
        return "eight";
    }
    if (digit2 == 9)
    {
        return "nine";
    }
}