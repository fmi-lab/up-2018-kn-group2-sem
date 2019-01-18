#include <iostream>

using namespace std;

int reverse_iter(int x) {
  int rev = 0;
  while (x != 0) {
    rev = rev * 10 + x % 10;
    x /= 10;
  }
  return rev;
}

int reverse(int x, int rev = 0) {
  if (x == 0) {
    return rev;
  }
  return reverse(x / 10, rev * 10 + x % 10);
}

// int reverse(int x) {
//   return reverse(x, 0);
// }

int main() {
  cout << reverse_iter(0) << endl;
  cout << reverse_iter(1) << endl;
  cout << reverse_iter(12) << endl;
  cout << reverse_iter(123) << endl;
  cout << reverse_iter(1234567) << endl; // 7654321

  cout << "Recursive .... " << endl;

  cout << reverse(0) << endl;
  cout << reverse(1) << endl;
  cout << reverse(12) << endl;
  cout << reverse(123) << endl;
  cout << reverse(1234567) << endl; // 7654321
  return 0;
}
