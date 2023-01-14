#include <iostream>
using namespace std;

float totalincome(string ,int, int);

int main()
{
    int rows, columns;
    string screenType;

    cout <<"Enter no. of rows: ";
    cin >> rows;
    cout <<"Enter no. of columns: ";
    cin >> columns;
    cout <<"Enter type of screen: ";
    cin >> screenType;

    cout << "Your total revenue is: "<< totalincome(screenType, rows, columns);

}
float totalincome(string screenType ,int rows, int columns)
{
    float total_price;
    if (screenType == "Premiere")
    {
        total_price = 12 * rows * columns;
    }
    else if (screenType == "Normal")
    {
        total_price = 7.50 * rows * columns;
    }
    else if (screenType == "Discount")
    {
        total_price = 5.00 * rows * columns;
    }

    return total_price;

}