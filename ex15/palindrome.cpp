#include <iostream>

using namespace std;


// Write a program to check whether a number is palindrome or not using recursion.

bool isPalindrome(int x, int reversedX, int originalX) {
  if (x == 0) {
    return originalX == reversedX;
  }
  return isPalindrome(x / 10, reversedX * 10 + x % 10, originalX);
}

bool isPalindrome(int x) {
  return isPalindrome(x, 0, x);
}

int main() {
  cout << " true == " << isPalindrome(54345) << endl;
  cout << " true == " << isPalindrome(3) << endl;
  cout << "false == " << isPalindrome(123) << endl;
  return 0;
}

