#include <iostream>
#include <Windows.h>
using namespace std;

float getbill(string month, string roomtype, int days);
float discount(float bill, int days,string month,string roomtype);

main()
{
    string month, roomtype;
    int days;
    cout << "Enter the month of stay: ";
    cin >> month;
    cout << "Enter the days staying: ";
    cin >> days;
    float billstudio = getbill(month,"studio",days);
    float billapartment = getbill(month,"apartment",days);

    //cout << getbill(month,"apartment",days);
    
    cout <<  "Apartment: price for whole stay is "<< discount(billapartment,days,month,"apartment")<<endl;
    cout <<  "Studio: price for whole stay is "<< discount(billstudio,days,month,"studio");

    

}

float getbill(string month, string roomtype, int days)
{

    if ((month == "may" || month == "october") && roomtype == "studio")
    {
        return 50 * days;
    }
    else if ((month == "may" || month == "october") && roomtype == "apartment")
    {
        return 65 * days;
    }
    else if ((month == "june" || month == "september") && roomtype == "studio")
    {
        return 75.20 * days;
    }
    else if ((month == "june" || month == "september") && roomtype == "apartment")
    {
        return 68.70 * days;
    }
    else if ((month == "july" || month == "august") && roomtype == "studio")
    {
        return 76 * days;
    }
    else if ((month == "july" || month == "august") && roomtype == "apartment")
    {
        return 77 * days;
    }
}


float discount(float bill, int days,string month,string roomtype)
{
    if((days>=7 && days <14) && (month == "may" || month == "october")&&(roomtype == "studio"))
    {
        cout <<"1";
        return bill*0.95;
    }
    if(days>=14 && (month == "may" || month == "october")&&(roomtype == "studio"))
    {
        cout <<"2";
        return bill*0.7;
    }
    if(days>=14 && (month == "june" || month == "september") && (roomtype == "studio"))
    {
        cout <<"3";
        return bill*0.80;
    }
    if(days>=14 && (roomtype == "apartment"))
    {
        cout <<"4";
        return bill*0.90;
    }
    else
    {
        return bill;
    }
   
}