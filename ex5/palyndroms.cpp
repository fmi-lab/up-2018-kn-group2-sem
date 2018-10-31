#include <iostream>

using namespace std;

// https://github.com/fmi-lab/up-2018-kn-group2-sem
int main() {

  int a, b;
  do {
    cout << "Enter value for a > 0: ";
    cin >> a;
  } while (a <= 0);

  do {
    cout << "Enter value for b > a: ";
    cin >> b;
  } while (b <= a);


  for (int x = a; x <= b; x++) {
    int copyX = x;
    int reversedX = 0;

    while (copyX != 0) {
      reversedX *= 10;
      reversedX += copyX % 10;
      copyX /= 10;
    }

    bool isPalyndrom = (x == reversedX);
    if (isPalyndrom) {
      cout << x << " ";
    }
  }
  cout << endl;

  // int x = 13531;

  // int copyX = x;
  // int reversedX = 0;

  // while (copyX != 0) {
  //   reversedX *= 10;
  //   reversedX += copyX % 10;
  //   copyX /= 10;
  // }

  // bool isPalyndrom = (x == reversedX);
  // if (isPalyndrom) {
  //   cout << "Is Palyndrom" << endl;
  // } else {
  //   cout << "Is NOT Palyndrom" << endl;
  // }

  return 0;
}
