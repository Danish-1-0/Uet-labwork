#include <iostream>
using namespace std;


main(){
string movie_name;
int adult_ticket_price;
int child_ticket_price;
int no_adultTickets;
int no_childTickets;
int percentage_donated;
int total_revenue;
int amount_donated;

cout << "Enter movie name: ";
cin >> movie_name;
cout << "enter adult ticket price: ";
cin >> adult_ticket_price;
cout << "enter child ticket price: ";
cin >> child_ticket_price;
cout << "Enter adult tickets sold: ";
cin >> no_adultTickets;
cout << "Enter child tickets sold: ";
cin >> no_childTickets; 
cout << "Enter percentage to be donated: ";
cin >> percentage_donated;
percentage_donated = percentage_donated;

cout << "______________________________" << endl;
total_revenue = (no_childTickets * child_ticket_price) + (no_adultTickets * adult_ticket_price);
amount_donated = (total_revenue * percentage_donated)/100;


cout << "total revenue generated " << total_revenue << endl;
cout << "amount after donation " << total_revenue - amount_donated << endl;





}