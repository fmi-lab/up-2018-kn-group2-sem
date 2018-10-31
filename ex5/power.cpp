#include <iostream>

using namespace std;

// 01. Вдигане на число на степен
int main() {
  int x, n;
  // input
  cout << "Enter value for x: ";
  cin >> x;

  cout << "Enter the power (n): ";
  cin >> n; // n >= 0

  // magic
  int result = 1;
  for (int i = 0; i < n; i++) {
    result *= x;
  }

  // output
  cout << "x^n = " << result << endl;
}
