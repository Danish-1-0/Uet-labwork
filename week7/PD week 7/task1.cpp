#include <iostream>
#include <Windows.h>
using namespace std;


string activity(string humidity, string temperature);
main()
{
 string humidity, temperature;
 cout << "Enter temperature: ";
 cin >> temperature;
 cout << "Enter humidity: ";
 cin >> humidity;

 cout << activity(humidity, temperature);   
}

string activity(string humidity, string temperature)
{
    if (temperature == "warm" && humidity == "humid")
    {
        return "swim";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        return "watch tv";
    }
    if (temperature == "warm" && humidity == "dry")
    {
        return "play tennis";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        return "play basketball";
    }
}

