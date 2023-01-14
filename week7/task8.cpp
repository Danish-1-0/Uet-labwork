#include <iostream>
#include <Windows.h>
using namespace std;

float tickets (float budget,string category, int people);
float moneyneeded(int people, string category);


main()
{
    float budget;
    string category;
    int people;

    cout << "Enter budget: ";
    cin >> budget;
    cout << "Enter category: ";
    cin >> category;
    cout << "Enter no of people: ";
    cin >> people;
    
    float result = tickets(budget,category,people);
    if (result>=0)
    {
        cout << "Yes you have " << budget - moneyneeded(people,category) << " rials remaining";  
    }
    else 
    {
        cout << "NO you need "<< (result *-1) << " more rials"; 
    }



}

float tickets (float budget,string category, int people)
{
    float remaining;
    
    if(people<=4)
    {
        return (0.75*budget) - moneyneeded(people,category);
    
    }

    if(people>=5 && people <10)
    {
        return (0.60*budget) - moneyneeded(people,category);
    }

    if(people>=10 && people <25)
    {
        
        return (0.5*budget) - moneyneeded(people,category);
        
    }
    if(people >=25 && people <50)
    {
        
        return (0.40*budget) - moneyneeded(people,category);
        
    }
    if(people>=50)
    {
        
        return (0.25*budget) - moneyneeded(people,category);
        
    }


}


float moneyneeded(int people, string category)
{   
    float money_needed;
    float VIP = 499.99, Normal = 249.99;
    if(category=="VIP")
        {
            money_needed = VIP*people;
        }

        else
        {
            money_needed = Normal * people;
        }
    return money_needed;
}