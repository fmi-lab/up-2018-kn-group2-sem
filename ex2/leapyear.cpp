// 02. Проверка дали точка лежи на окръжност (Xp, Yp)
// (Xc, Yc) = (3, 2)
// R = 2

#include <iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;

  // Годината се дели на 400 е високосна
  // Ако се дели на 100 не е!
  // Ако се дели на 4 е високосна
  bool isLeapYear = (year % 400 == 0)
                 || (year % 100 != 0 && year % 4 == 0);

  if (isLeapYear) {
    cout << "The year " << year << " is leap" << endl;
  } else {
    cout << "The year " << year << " is not leap" << endl;
  }

  return 0;
}
