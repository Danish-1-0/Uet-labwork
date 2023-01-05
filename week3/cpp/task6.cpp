#include <iostream>
using namespace std;

main(){
float bag_size;
float bag_cost;
float bag_area;

cout << "enter the size of the bag in pounds: ";
cin >> bag_size;
cout << "enter the cost of the bag: ";
cin >> bag_cost;
cout << "enter the area that can be fertilized by the bag: ";
cin >> bag_area;


cout << "The cost of the fertilizer per pound is: " << bag_cost/bag_size << endl;
cout << "The cost of fertilizing the area per square foot is: " << bag_cost/bag_area;
  








}