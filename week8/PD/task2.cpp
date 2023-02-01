#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;


    for (int i=0;i <= rows;i++)
    {
        int j = rows-i;
        for(;j > 0;j--)
        {
            cout << " * ";
        }
        cout << " "<<endl;
    }

}