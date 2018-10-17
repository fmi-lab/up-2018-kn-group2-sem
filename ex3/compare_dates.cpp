// Проверка коя е по-малката от две дати
#include<iostream>
using namespace std;

int main() {
  int day1, month1, year1; // date 1
  int day2, month2, year2; // date 2

  cout << "Enter date 1 (dd mm yyyy): ";
  cin >> day1 >> month1 >> year1;

  cout << "Enter date 2 (dd mm yyyy): ";
  cin >> day2 >> month2 >> year2;

  int date1 = 10000 * year1 + 100 * month1 + day1;
  int date2 = 10000 * year2 + 100 * month2 + day2;

  if (date1 < date2) {
    cout << "Date 1 is before Date 2" << endl;
  } else if (date2 < date1) {
    cout << "Date 2 is before Date 1" << endl;
  } else {
    cout << "Dates are equal" << endl;
  }

  if (year1 < year2) {
    cout << "Date 1 is before Date 2" << endl;
  } else if (year2 < year1) {
    cout << "Date 2 is before Date 1" << endl;
  } else { // year2 == year1

    if (month1 < month2) {
      cout << "Date 1 is before Date 2" << endl;
    } else if (month2 < month1) {
      cout << "Date 2 is before Date 1" << endl;
    } else { // month2 == month1

      if (day1 < day2) {
        cout << "Date 1 is before Date 2" << endl;
      } else if (day2 < day1) {
        cout << "Date 2 is before Date 1" << endl;
      } else { // day2 == day1
        cout << "Dates are equal" << endl;
      }

    }

  }

  cout << "Date 1 is: " << day1 << "/" << month1 << "/" << year1 << endl;
  cout << "Date 2 is: " << day2 << "/" << month2 << "/" << year2 << endl;

  return 0;
}
