#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
    int total;
    float p1=0,p2=0,p3=0;

    cout << "Enter the count of integers: ";
    cin >> total;
    for(int count=1;count<=total;count++)
    {
        int integer;
        cout << "Enter integer: ";
        cin >> integer;
        if(integer%2 == 0)
        {
            p1 = p1+1;
        }
        else if(integer%3 == 0)
        {
            p2 = p2+1;
        }
        else if(integer%4 == 0)
        {
            p2 = p2+1;
        }
    }


    cout << (p1/total)*100 <<endl;
    cout << (p2/total)*100 <<endl;
    cout << (p3/total)*100 <<endl;
}