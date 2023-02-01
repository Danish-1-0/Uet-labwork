#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
    int total;
    float price=0;
    float weight=0,totalweight=0,mini=0,truck=0,train=0;

    cout << "Enter the number of cargos: ";
    cin >> total;


    for(int count=1;count<=total;count++)
    {

        cout << "Enter weight of cargo: ";
        cin >> weight;
        totalweight = totalweight+weight;

        if(weight <= 3 )
        {   
            mini = mini + weight;
            
        }
        if(weight > 3 && weight <=11)
        {   
            truck = truck + weight;
            
        }
        if(weight >11 )
        {   
            train = train + weight;
            
        }
    }

    price = price + (200*mini) + (175*truck) + (120*train);

    cout << price/totalweight<<endl;
    cout << (mini/totalweight)*100 <<endl;
    cout << (truck/totalweight)*100 <<endl;
    cout << (train/totalweight)*100 <<endl;
}