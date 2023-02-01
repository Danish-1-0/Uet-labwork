#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


#include <iostream>
using namespace std;




main()
{
    int rows,k1; 
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j=j-1)
        { 
             cout << " ";
        }
        for(int x=1;x <=i ;x++)
        {
            cout << "*";
            
        }
        cout << endl;
    }
    for (int i = 1; i <= rows; i++)
    {
        for(int x=1;x <=i ;x++)
        {
            cout << " ";
            
        }
        for (int j = rows; j >= i; j=j-1)
        { 
             cout << "*";
        }
       
        cout << endl;
    }
}










/*void upper(int rows)
{
    for (int i=1;i <= rows;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout << " ";
            for(int count = 1; count <= rows-count;count++)
            {
            cout << "*";
            }
        }
        cout << " "<<endl;
    }

}


void lower(int rows)
{
    for (int i=1;i <= rows;i++)
    {
        int j = rows-i;
        for(;j > 0;j--)
        {
            cout << " * ";
        }
        cout << " "<<endl;
    }

}





