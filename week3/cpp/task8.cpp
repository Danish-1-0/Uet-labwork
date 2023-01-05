#include <iostream>
using namespace std;


main(){
float veg_price_perKG;
float fruit_price_perKG;
int total_KG_veg;
int total_KG_fruit;
float total_veg_earning;
float total_fruit_earning;
float total_earning;

cout << "enter price per kg of vegetables: ";
cin >> veg_price_perKG;
cout << "enter price per kg of fruits: ";
cin >> fruit_price_perKG;
cout << "enter total KGs of vegetbales sold: ";
cin >> total_KG_veg;
cout << "enter total KGs of fruits sold: ";
cin >> total_KG_fruit;

total_veg_earning = (veg_price_perKG * total_KG_veg)/1.94;
total_fruit_earning = (fruit_price_perKG * total_KG_fruit)/1.94;

cout << "total vegetable earning: " << total_veg_earning << endl;  
cout << "total fruit earning: " << total_fruit_earning <<endl;  
cout << "total earning is: " << total_fruit_earning+ total_veg_earning;






}