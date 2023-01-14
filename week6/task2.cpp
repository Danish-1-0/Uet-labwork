#include <iostream>
#include <windows.h>
using namespace std;

float volumecalc(float length,float width,float height);

string unit;
main()
{
    float length,width,height,volume;
cout << "Enter the length: ";
cin >> length;
cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;
cout <<"Enter the preferred unit: ";
cin >> unit;

volume = volumecalc(length,width,height);
if (unit == "centimeter")
{
    volume = volume *100;
}
if (unit == "kilometer")
{
    volume = volume/1000;
}
if (unit == "millimeter")
{
    volume = volume *1000;
}
cout << "Volume of the pyramid is : "<<volume<<" cubic "<<unit; 

}

float volumecalc(float length,float width,float height)
{
    float volume = (length*width*height)/3;
    return volume; 

}