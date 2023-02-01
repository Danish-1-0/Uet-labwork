#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int dots(int order);
main()
{
    int order;
    cout << "Enter order of the triangle: ";
    cin >> order;
    cout << "No of dots are "<<dots(order);


}


int dots(int order)
{
    int newnum;
    int series =2;
    int n1 = 1;
    int n2 = 3;
    bool found = false;
    while(found == false)
    { 
        int diff = n2-n1;
        newnum = n2+diff+1;
        n1=n2;
        n2=newnum;

        series = series +1;
        if (series == order )
        {
            return newnum;
            found == true;
        }
        else if (series-2==order)
        {
            return 1;
            found == true;

        }
        else if (series-1 ==order) 
        {
            return 3;
            found == true;
        }



    }
}



