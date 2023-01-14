#include <iostream>
using namespace std;

string checkTitle(float, char );

int main()
{
    float age;
    char gender;

    cout <<"Enter age: ";
    cin >> age;

    cout << "Enter gander: ";
    cin >> gender;
    cout << checkTitle(age, gender);

}
string checkTitle(float age, char gender )
{
    string title;
    if (age <= 16 && gender == 'm')
        title = "Mr.";
    else if (age > 16 && gender == 'm')
        title = "Master";
    else if (age <= 16 && gender == 'f')
        title = "Ms.";
    else if (age > 16 && gender == 'f')
        title = "Miss";

    return title;

}