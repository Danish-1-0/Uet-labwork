#include <iostream>
#include <Windows.h>
using namespace std;

float price (string city,string product, int quantity);

main()
{
    string city,product;
    int quantity;

    cout <<"Enter the city: ";
    cin >> city;
    cout <<"Enter the product: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << "Cost is "<< price(city,product,quantity);



}

float price (string city,string product, int quantity)
{
    float finalprice;
    if(city =="Sofia")
    {
        if(product=="coffee")
        {
            finalprice =  quantity* 0.50;
        }
        else if (product =="water")
        {
            finalprice = quantity * 0.80;
        }
        else if (product =="beer")
        {
            finalprice = quantity * 1.20;
        }
        else if (product =="sweets")
        {
            finalprice = quantity * 1.45;
        }
        else if (product =="peanuts")
        {
            finalprice = quantity * 1.60;
        }
        return finalprice;
    }
    else if(city =="Plovdiv")
    {
        if(product=="coffee")
        {
            finalprice =  quantity* 0.40;
        }
        else if (product =="water")
        {
            finalprice = quantity * 0.70;
        }
        else if (product =="beer")
        {
            finalprice = quantity * 1.15;
        }
        else if (product =="sweets")
        {
            finalprice = quantity * 1.30;
        }
        else if (product =="peanuts")
        {
            finalprice = quantity * 1.50;
        }
        return finalprice;
    }
    else if(city =="Varna")
    {
        if(product=="coffee")
        {
            finalprice =  quantity* 0.45;
        }
        else if (product =="water")
        {
            finalprice = quantity * 0.70;
        }
        else if (product =="beer")
        {
            finalprice = quantity * 1.10;
        }
        else if (product =="sweets")
        {
            finalprice = quantity * 1.35;
        }
        else if (product =="peanuts")
        {
            finalprice = quantity * 1.55;
        }
        return finalprice;
    }
}
