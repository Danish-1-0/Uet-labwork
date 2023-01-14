#include <iostream>
using namespace std;

string checkSpeed(float);

int main()
{
    float speed;

    cout <<"Enter speed: ";
    cin >> speed;

    cout << checkSpeed(speed);

}
string checkSpeed(float speed)
{
    string title;
    if (speed <= 10)
        title = "slow";
    else if (speed <= 50)
        title = "average";
    else if (speed <= 150)
        title = "fast";
    else if (speed <= 1000)
        title = "Ultra fast";
    else if (speed > 1000)
        title = "EXTREMELY fast";
    return title;

}