#include <iostream>
#include <Windows.h>
using namespace std;

float price(string fruit);
float getnewprice(string fruit);
main()
{
    string fruit, day;
    float quantity;

    cout << "Enter the name of the fruit: ";
    cin >> fruit;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;
    

    if(day == "sunday" || day == "saturday")
    {
        cout << "bill is " << getnewprice(fruit) * quantity;
    }
    else
    {
        cout << "bill is " << price(fruit) * quantity;
    }




}



float price(string fruit)
{
    if(fruit == "banana")
    {
        return 2.50;
    }
    else if(fruit == "apple")
    {
        return 1.20;
    }
    else if(fruit == "orange")
    {
        return 0.85;
    }
    else if(fruit == "grapefruit")
    {
        return 1.45;
    }
    else if(fruit == "kiwi")
    {
        return 2.70;
    }
    else if(fruit == "pineapple")
    {
        return 5.50;
    }
    else if(fruit == "grapes")
    {
        return 3.85;
    }
    
}







float getnewprice(string fruit)
{
    if(fruit == "banana")
    {
        return 2.70;
    }
    else if(fruit == "apple")
    {
        return 1.25;
    }
    else if(fruit == "orange")
    {
        return 0.90;
    }
    else if(fruit == "grapefruit")
    {
        return 1.60;
    }
    else if(fruit == "kiwi")
    {
        return 3.00;
    }
    else if(fruit == "pineapple")
    {
        return 5.60;
    }
    else if(fruit == "grapes")
    {
        return 4.20;
    }
}