#include <iostream>
#include <cmath>

using namespace std;

// 05. Да се провери дали едно число е просто
int main() {
  long number;
  cout << "Enter a number: ";
  cin >> number;

  bool isPrime = true;

  double n = sqrt(number);
  for (long i = 2; i <= n; i++) {
    if (number % i == 0) {
      cout << i << endl;
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    cout << "The number is prime" << endl;
  } else {
    cout << "The number is NOT prime" << endl;
  }

  return 0;
}
