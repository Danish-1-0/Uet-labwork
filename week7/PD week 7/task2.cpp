#include <iostream>
#include <Windows.h>
using namespace std;

string getgrade(float totalmarks);

main()
{
    float totalmarks, marks;
    string name;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter the marks for subject 1: ";
    cin >> totalmarks;
    cout << "Enter the marks for subject 2: ";
    cin >> marks;
    totalmarks = totalmarks + marks;
    cout << "Enter the marks for subject 3: ";
    cin >> marks;
    totalmarks = totalmarks + marks;
    cout << "Enter the marks for subject 4: ";
    cin >> marks;
    totalmarks = totalmarks + marks;
    cout << "Enter the marks for subject 5: ";
    cin >> marks;
    totalmarks = totalmarks + marks;

    cout << "Student name: "<< name << " has the grade: "<< getgrade(totalmarks);
}


string getgrade(float totalmarks)
{
    if((totalmarks/500) >= 0.9)
    {
        return "A+";
    }
    if((totalmarks/500) >= 0.8 && (totalmarks/500) <0.9)
    {
        return "A";
    }
    if((totalmarks/500) >= 0.7 && (totalmarks/500) <0.8)
    {
        return "B+";
    }
    if((totalmarks/500) >= 0.6 && (totalmarks/500) <0.7)
    {
        return "B";
    }
    if((totalmarks/500) >= 0.5 && (totalmarks/500) <0.6)
    {
        return "C";
    }
    if((totalmarks/500) >= 0.4 && (totalmarks/500) <0.5)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}