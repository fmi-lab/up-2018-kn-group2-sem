#include <iostream>

using namespace std;

// 01. Да се изведе 4 цифрено число в обратен ред
int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int copyOfNumber = number;

   // 1234
  int d4 = copyOfNumber % 10;
  copyOfNumber /= 10;

  // 123
  int d3 = copyOfNumber % 10;
  copyOfNumber /= 10;

  // 12
  int d2 = copyOfNumber % 10;
  copyOfNumber /= 10;

  // 1
  int d1 = copyOfNumber;
  copyOfNumber /= 10;

  int digit4 = number % 10;
  int digit3 = (number / 10) % 10;
  int digit2 = (number / 100) % 10;
  int digit1 = number / 1000;

  int reversedNumber = digit4 * 1000
                     + digit3 * 100
                     + digit2 * 10
                     + digit1;

  cout << "The reversed number is: ";
  cout << d4 << d3 << d2 << d1 << endl;

  cout << "The reversed number is: ";
  cout << digit4 << digit3 << digit2 << digit1 << endl;

  cout << "The reversed number is: " << reversedNumber << endl;


  return 0;
}
