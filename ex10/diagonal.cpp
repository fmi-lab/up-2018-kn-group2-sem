#include <iostream>

using namespace std;

int main() {
  //   row col
  int n;
  int a[100][100];

  cout << "Size of the matrix: ";
  cin >> n; // n < 100

  for (int i = 0; i < n; i++) { // n
    for (int j = 0; j < n; j++) {
      cout << "Enter value for a[" << i << "][" << j << "]: ";
      cin >> a[i][j];
    }
  }

  bool isDiagonalPrime = true;
  for (int i = 0; isDiagonalPrime && i < n; i++) {
    for (int j = 0; isDiagonalPrime && j < n; j++) {
      if (i != j && a[i][j] != 0) {
        isDiagonalPrime = false;
      }
    }
  }

  bool isDiagonalSecondary = true;
  for (int i = 0; isDiagonalSecondary && i < n; i++) {
    for (int j = 0; isDiagonalSecondary && j < n; j++) {
      if (i + j != n - 1 && a[i][j] != 0) {
        isDiagonalSecondary = false;
      }
    }
  }

  cout << endl;
  cout << endl;
  cout << endl;
  if (isDiagonalPrime || isDiagonalSecondary) {
    cout << "Yes !!!!" << endl;
  } else {
        cout << "No" << endl;
  }

  // TEST DATA
  // OK 3 1 0 0 0 1 0 0 0 1
  // KO 3 1 5 0 0 1 0 0 0 1
  // OK 3 0 0 7 0 1 0 5 0 0
  // KO 3 1 0 7 0 1 0 5 0 2

  return 0;
}
