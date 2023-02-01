#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void sequence(int upper);

main()
{
    int upper;
    cout << "Enter upper bound: ";
    cin >> upper;
    sequence(upper);


}



void sequence(int upper)
{
    int amp=10;
    for (int count = 1; count <= upper;count++)
    {
        if(count%4==0)
        {
            cout <<" "<< count * amp<< " ";
        }
        else
        {
            cout << " "<<count<< " ";
        }
    }
}