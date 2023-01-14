#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

float getmins(int hrs,int mins);
void checktime(int starthr,int startmin,int arrivalhr,int arrivalmin);

main()
{
    int starthr,startmin,arrivalhr,arrivalmin;


    cout << "Enter exam starting time in hrs and mins: ";
    cin >> starthr >> startmin;
    cout << "Enter arrival time in hrs and mins: ";
    cin >> arrivalhr >> arrivalmin;

    checktime(starthr,startmin,arrivalhr,arrivalmin);


    
}


float getmins(int hrs,int mins)
{
    float totalmins = hrs*60 + mins;
   return totalmins;

}


void checktime(int starthr,int startmin,int arrivalhr,int arrivalmin)
{
    float arrivalmins,startmins;
    startmins = getmins(starthr,startmin);
    arrivalmins = getmins(arrivalhr,arrivalmin);
    int timediff = startmins-arrivalmins;
    if (timediff >= 0)
    {

        if(timediff>=0 && timediff <=30)
        {
            cout << "student is one time "<< timediff<< " mins early";
        }
        if(timediff>30 && timediff<60)
        {
            cout << "student is early" << timediff<< " mins early";
        }
        if(timediff>=60)
        {
            cout << "student is early "<<floor(timediff/60)<<":"<<(timediff%60)<<" early";
        }

    }
    if (timediff < 0 && timediff*-1 <60)
    {
        cout << "student is late "<< timediff*-1 <<" mins late";

    }
    else if (timediff*-1 >= 60)
    {
        cout << "student is late "<<floor((timediff*-1)/60)<<":"<<(timediff%60)<< " late";
    }
    {
            
    }
}