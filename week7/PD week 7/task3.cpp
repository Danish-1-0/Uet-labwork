#include <iostream>
#include <Windows.h>
using namespace std;

string getsign(string month, int day);

main()
{
    string month;
    int day;


    cout << "Enter date of birth: ";
    cin >>day;
    cout << "Enter month of birth: ";
    cin >>month;

    cout << "Your star sign is: "<<getsign(month,day);


}

string getsign(string month, int day)
{
    if ((month == "March" && day>= 21) || (month == "April" &&  day <=19))
    {
        return "Aries";
    }
    if ((month == "April" && day>= 20)  || (month == "May"  && day <=20))
    {
        return "Tauras";
    }
    if ((month == "May" && day>= 21)  || (month == "June"   && day <=20))
    {
        return "Gemini";
    }
    if ((month == "June" && day>= 21)  || (month == "July"  && day <=22))
    {
        return "Cancer";
    }
    if ((month == "July" && day>= 23)  || (month == "July"  && day <=22))
    {
        return "Leo";
    }
    if ((month == "August" && day>= 23)  || (month == "September"  && day <=22))
    {
        return "Virgo";
    }
    if ((month == "September" && day>= 23)  || (month == "October"  && day <=22))
    {
        return "Libra";
    }
    if ((month == "October" && day>= 23)  || (month == "November"  && day <=21))
    {
        return "Scorpio";
    }
    if ((month == "November" && day> 21)  || (month == "December"  && day <=21))
    {
        return "Sagittarius";
    }
    if ((month == "December" && day>= 22)  || (month == "January"  && day <=19))
    {
        return "Capricorn";
    }
    if ((month == "January" && day>= 20)  || (month == "February"  && day <=18))
    {
        return "Aquarius";
        if ((month == "February" && day>= 19)  || (month == "March"  && day <=20))
    {
        return "Pisces";
    }
    }

}