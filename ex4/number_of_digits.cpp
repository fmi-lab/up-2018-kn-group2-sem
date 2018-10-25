#include <iostream>
#include <cmath>

using namespace std;

// 03. Да се провери колко цифри има дадено число 
int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int copyOfNumber = number;

  // Make it work
  // Make it clean
  // Make if fast, if need be

  int numberOfDigits = 0;
  if (copyOfNumber == 0) {
    numberOfDigits = 1;
  }

  while (copyOfNumber != 0) {
    numberOfDigits++;
    copyOfNumber /= 10;
  }

  cout << "Number of digits: " << numberOfDigits << endl;
  cout << "Number of digits: " << ( (long)log10(number) + 1 ) << endl;


  return 0;
}
