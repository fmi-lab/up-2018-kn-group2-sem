#include <iostream>

using namespace std;

void print(int * a, int n) {
  if (n == 1) {
    cout << a[0] << endl;
    return;
  }
  cout << a[0] << " ";
  print(a + 1, n - 1);
}

void printReverse1(int * a, int n) {
  if (n == 1) {
    cout << a[0] << endl;
    return;
  }
  cout << a[n - 1] << " ";
  printReverse1(a, n - 1);
}

void printReverse2(int * a, int n) {
  if (n == 1) {
    cout << a[0] << " ";
    return;
  }
  printReverse2(a + 1, n - 1);
  cout << a[0] << " ";
}

int main() {
  int test1[] = {1, 2, 3, 5, 100, -5, 113};
  print(test1, 7);
  printReverse1(test1, 7);
  printReverse2(test1, 7);
  cout << endl;

  return 0;
}
