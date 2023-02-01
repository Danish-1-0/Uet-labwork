#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void patients(int period);
main()
{
    int period, treated, untreated;
    cout << "Enter the time period: ";
    cin >> period;
    patients(period);
}

void patients(int period)
{

    int treated, untreated;
    int totaltreated = 0, totaluntreated = 0;
    int treatable = 7;

    for (int x = 1; x <= period; x++)
    {
         if (x % 3 == 0)
        {
            if (totaluntreated > totaltreated)
            {
                treatable = treatable + 1;
            }
        }

        cout << "Enter total patients today: ";
        cin >> treated;

        if (treated <= treatable)
        {
            totaltreated = totaltreated + treated;
        }

        else if (treated > treatable)
        {
            totaltreated = totaltreated + treatable;
            totaluntreated = totaluntreated + (treated - treatable);
        }
        
       
    }
    cout << "total treated patients = " << totaltreated << endl;
    cout << "Total untreated patients = " << totaluntreated << endl;
}
