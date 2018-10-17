// 01. Проверка дали точка лежи на права

#include <iostream>
using namespace std;

int main() {

  double Xp, Yp;

  cout << "Input value for Xp: ";
  cin >> Xp;

  cout << "Input value for Yp: ";
  cin >> Yp;

  cout << "Left  hand side: " << (0.5 * Xp + 0.5) << endl;
  cout << "Right hand side: " << Yp << endl;

  // <  > == !=  <= >=
  if ( 0.5 * Xp + 0.5 - Yp < 0.00000001 ) { // condition
    cout << "The point ("
         << Xp << "," << Yp << ") is on the line" << endl;
  } else { // condition is not met
    cout << "The point ("
         << Xp << "," << Yp << ") is NOT on the line" << endl;
  }


  // Debug statement
  // cout << "The point is (" << Xp << "," << Yp << ")" << endl;

  return 0;
}
