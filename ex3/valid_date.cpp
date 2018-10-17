#include <iostream>

using namespace std;

int main() {
  int day, month, year;

  // input
  cout << "Enter a date (dd mm yyyy): ";
  cin >> day >> month >> year;

  // it's a kind of magic
  int maxDaysInMonth = 0;

  // Option 1
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    maxDaysInMonth = 31;

  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    maxDaysInMonth = 30;

  } else if (month == 2) {
    bool isLeapYear = (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
    maxDaysInMonth = isLeapYear ? 29 : 28;

  }

  // Option 2
  // switch (month) {
  //   case 1: maxDaysInMonth = 31; break;
  //   case 2:
  //     bool isLeapYear = (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
  //     maxDaysInMonth = isLeapYear ? 29 : 28;
  //     break;
  //   case 3: maxDaysInMonth = 31; break;
  //   case 4: maxDaysInMonth = 30; break;
  //   case 5: maxDaysInMonth = 31; break;
  //   case 6: maxDaysInMonth = 30; break;
  //   case 7: maxDaysInMonth = 31; break;
  //   case 8: maxDaysInMonth = 31; break;
  //   case 9: maxDaysInMonth = 30; break;
  //   case 10: maxDaysInMonth = 31; break;
  //   case 11: maxDaysInMonth = 30; break;
  //   case 12: maxDaysInMonth = 31; break;
  //   default: maxDaysInMonth = 0;
  // }

  // Option 3
  // switch (month) {
  //   case 1:
  //   case 3:
  //   case 5:
  //   case 7:
  //   case 8:
  //   case 10:
  //   case 12: maxDaysInMonth = 31; break;

  //   case 4:
  //   case 6:
  //   case 9:
  //   case 11: maxDaysInMonth = 30; break;

  //   case 2:
  //     bool isLeapYear = (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
  //     maxDaysInMonth = isLeapYear ? 29 : 28;
  //     // break;

  //   default: maxDaysInMonth = 0;
  // }

  bool isDateValid = (1 <= day && day <= maxDaysInMonth);

  // output
  if (isDateValid) {
    cout << "Date is valid" << endl;
  } else {
    cout << "Date is NOT valid" << endl;
  }

  return 0;
}
