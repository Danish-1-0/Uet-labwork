#include <iostream>
using namespace std;

float calculatePrice(float, string , string);

int main()
{
    float amount;
    string day, month;

    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    float result = calculatePrice(amount, day, month);
    cout << "The total price is: " << result ;
    return 0;

}
float calculatePrice(float amount, string day, string month)
{
    if (day == "Sunday")
    {
        if (month == "October")
            amount = amount * 0.9;
        else
            amount = amount * 0.95;
    }
    return amount;



}