#include <cmath>
#include <iostream>
using namespace std;


float totalplays(string year, float holidays, float weekends);

main() {
  string year;
  float holidays, weekends;
  cout << "enter the year type=";
  cin >> year;
  cout << "enter the number of holidays=";
  cin >> holidays;
  cout << "enter the weekends in which he goes to hometown=";
  cin >> weekends;
  int output = totalplays(year, holidays, weekends);
  cout << output;

}




float totalplays(string year, float holidays, float weekends) {
  float weekendplay,holidayplay, totalplay, leapyearplay;
  float output;
  if (year == "leap") {
    weekendplay = 48 * 0.75;
    holidayplay = (holidays * 2) / 3;
    totalplay = weekendplay + holidayplay;
    leapyearplay = totalplay * 0.15;
    totalplay = totalplay + leapyearplay;
  }
  if (year == "normal") {
    weekendplay = 48 * 0.75;
    holidayplay = (holidays * 2) / 3;
    totalplay = weekendplay + holidayplay;
  }
  return totalplay;
}