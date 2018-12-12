#include <iostream>

using namespace std;

/*
  Write a function to find first and last digit of a number.
*/


// FAKE
void firstLastDigit() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // magic ...
  int firstDigit;
  int lastDigit;

  cout << "First digit" << firstDigit << endl;
  cout << "Last digit" << lastDigit << endl;
}

// връща първата цифра на числото
int findFirstDigit(int n) {
  while (n > 10) {
    n /= 10;
  }
  return n;
}

int firstLastDigit(int n) {
  int firstDigit = findFirstDigit(n);
  int lastDigit = n % 10;

  return firstDigit * 10 + lastDigit;
}

int main() {
  cout << "5   : 55 == " << firstLastDigit(5) << endl;
  cout << "1234: 14 == " << firstLastDigit(1234) << endl;
  cout << "0   :  0 == " << firstLastDigit(0) << endl;
  cout << "49  : 49 == " << firstLastDigit(49) << endl;

  return 0;
}
