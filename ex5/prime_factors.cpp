#include <iostream>

using namespace std;

// 02. Всички прости делители на едно число
int main() {
  int x;
  // input
  cout << "Enter value for x: ";
  cin >> x;

  cout << "Factors: ";
  for (int i = 2; i <= x; i++) {
    if (x % i != 0) {
      continue;
    }

    bool isPrime = true;
    for (int j = 2; j <= sqrt(i); j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      cout << i << " ";
    }
  }
  cout << endl;

}
