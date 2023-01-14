#include <iostream>
#include <windows.h>
using namespace std;

void ifpossible(int hoursneeded,int havehours, int noOFworkers);

main()
{
    int hoursneeded, havehours,noOFworkers,havedays;


    cout << "Enter the hours needed to complete the project: ";
    cin >> hoursneeded;
    cout <<"Enter the hours the firm has: ";
    cin >>havedays;
    cout << "Enter the total number of workers available: ";
    cin >> noOFworkers;

    havedays = havedays*0.90;
    havehours = havedays*10*noOFworkers;

    
    ifpossible(hoursneeded,havehours,noOFworkers);




}

void ifpossible(int hoursneeded,int havehours, int noOFworkers)
{
    
    if (hoursneeded/havehours <= 1)
    {
        cout <<"YES "<< havehours-hoursneeded<< " hours left" ;
    }
    if (hoursneeded/havehours > 1)
    {
        cout <<"Not enough time "<< hoursneeded- havehours<< " hours more needed" ;
    }
}
