#include <iostream>
#include <windows.h>
using namespace std;


float taxCalculator(char type, float price);


main()
{
    char type;
    float price,tax;


    cout <<"Enter the vehile type code: ";
    cin >> type;
    cout <<"Enter the vehile price: ";
    cin >> price;
    tax =taxCalculator(type,price);
    cout << "For vehicle type "<<type<< " Final price is: " << price+tax;
}

float taxCalculator(char type, float price)
{float tax_rate;
    if (type == 'M')
    {
        tax_rate=0.06;
        float tax = price*tax_rate;
        return tax;
    }
    if (type == 'E')
    {
        tax_rate=0.08;
        float tax = price*(tax_rate);
        return tax;
    }
    if (type == 'S')
    {
        tax_rate=0.1;
        float tax = price*(tax_rate);
        return tax;
    }
    if (type == 'V')
    {
        tax_rate=0.12;
        float tax = price*(tax_rate);
        return tax;
    }
    if (type == 'T')
    {
        tax_rate=0.15;
        float tax = price*(tax_rate);
        return tax;
    }
}