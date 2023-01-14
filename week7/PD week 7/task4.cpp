#include <iostream>
#include <Windows.h>
using namespace std;

float get_Reg_bill(int numMinutes);
float get_Prem_bill(int daymins,int nightmins);

main()
{
    char servicecode;
    int numMinutes,daymins,nightmins;

    cout << "Enter your service code: ";
    cin >> servicecode;
    
    if (servicecode == 'p')
    {
        cout << "Enter time used in the day: ";
        cin >> daymins;
        cout << "Enter time used in the night: ";
        cin >> nightmins;
        
        cout << "your bill is " << get_Prem_bill(daymins,nightmins);
        
    }
    else if (servicecode = 'r')
    {
        cout << "Enter the total number of minutes used";
        cin >> numMinutes;

        cout << "your bill is "<< get_Reg_bill(numMinutes);

    }
    else
    {
        cout << "error invalid srvice code";
    }

}


float get_Reg_bill(int numMinutes)
{
    
    float FeeReg = 10;
    if(numMinutes >50)
    {
        numMinutes = numMinutes - 50;
        return (numMinutes * 0.20)+FeeReg; 
    }
    else if (numMinutes <= 50)
    {
        return (numMinutes * 0.20)+FeeReg; 
    }
    
}



float get_Prem_bill(int daymins,int nightmins)
{
    float FeePrem = 25;
    float totalfee;
    if(daymins > 75)
    {
        nightmins = daymins - 75;
        totalfee = (daymins * 0.10); 
    }
    if (daymins <= 75)
    {
        totalfee = 0; 
    }
    if(nightmins > 100)
    {
        nightmins = nightmins - 100;
        totalfee = totalfee + (nightmins * 0.05); 
    }
    if (nightmins <= 100)
    {
        totalfee = totalfee +0 ; 
    }
    return totalfee + FeePrem;

}