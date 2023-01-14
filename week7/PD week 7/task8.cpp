#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;


main()
{
    int h,x,y;
    cout << "Enter value of h: ";
    cin >> h;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;


    if( (y!=0 && y<4*h) && (x!=0 && x <3*h))
    {
        cout  << "inside";
    }
    if ((x < 3*h && y!=0) && (y > 4*h))
    {
        cout <<"Outside";

    }
    if ((x < h && y!=0) && (y > 4*h))
    {
        cout <<"Outside";

    }
    if ((x > 2*h && y!=0) && (y > 4*h))
    {
        cout <<"Outside";

    }
    if (x > 3*h)
    {
        cout <<"Outside";

    }
    if (x == 0 || x==h || x ==2*h || x ==3*h)
    {
        cout <<"On border";

    }
    if (x == h && y<4*h)
    {
        cout <<"On border";

    }
    if (x == 2*h && y<4*h)
    {
        cout <<"On border";
    }

 
        





}