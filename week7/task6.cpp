#include <iostream>
#include <Windows.h>
using namespace std;

float lowestprice (int km,string period);



main()
{
    int km;
    string period;
    cout  << "Enter the kms to travel: ";
    cin >> km;
    cout << "Enter the time of day: ";
    cin >> period;

    cout << "Lowest price is: "<<lowestprice(km,period);


}

float lowestprice (int km,string period)
{
    float price;
    if(km >= 100)
    {
        price = km * 0.06;
    }
    else if(km >= 20 && km < 100)
    {
        price = km*0.09;
    }
    else
    {
        if(period == "day")
        {
            price = km*0.79;
        }
        else
        {
            price = km*0.90;
        }
    }
    return price;
}