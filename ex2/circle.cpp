// 02. Проверка дали точка лежи на окръжност (Xp, Yp)
// (Xc, Yc) = (3, 2)
// R = 2

#include <iostream>
using namespace std;

int main() {

  double Xp, Yp;

  cout << "Input value for Xp: ";
  cin >> Xp;

  cout << "Input value for Yp: ";
  cin >> Yp;

  // <  > == !=  <= >=
  // logic operators: &&    || !
  //                  and   or not
  bool isInCircle = (Xp - 3) * (Xp - 3) + (Yp - 2) * (Yp - 2) < 4;
  bool isInQ1 = Xp >= 3 && Yp >= 2;

  if (isInQ1 && isInCircle) {
    cout << "The point ("
         << Xp << "," << Yp << ") is on the circle" << endl;
  } else {
    cout << "The point ("
         << Xp << "," << Yp << ") is NOT on the circle" << endl;
  }

  return 0;
}
