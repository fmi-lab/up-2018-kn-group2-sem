#include <iostream>

using namespace std;

// 02. Да се изведе произволно число в обратен ред
int main() {
  // input
  int number;
  cout << "Enter a number: ";
  cin >> number;

  // magic
  int copyOfNumber = number;

  int reversedNumber = 0;
  while (copyOfNumber > 0) {
    int digit = copyOfNumber % 10;

    reversedNumber *= 10;
    reversedNumber += digit;

    copyOfNumber /= 10;
  }

  cout << "The reversed number is: " << reversedNumber << endl;

  // output


  return 0;
}
