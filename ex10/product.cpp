#include <iostream>

using namespace std;

int main() {
  const int ROWS_OF_A = 2;
  const int COLS_OF_B = 2;

  //   row col
  int a[ROWS_OF_A][3];
  int b[3][COLS_OF_B];

  int result[2][2];

  for (int i = 0; i < 2; i++) { // n
    for (int j = 0; j < 3; j++) { // m
      cout << "Enter value for a[" << i << "][" << j << "]: ";
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 3; i++) { // n
    for (int j = 0; j < 2; j++) { // m
      cout << "Enter value for b[" << i << "][" << j << "]: ";
      cin >> b[i][j];
    }
  }

  // MAGIC!!!
  for (int i = 0; i < ROWS_OF_A; i++) { // n
    for (int j = 0; j < COLS_OF_B; j++) { // m
      int sum = 0;
      for (int k = 0; k < 3; k++) {
        sum += a[i][k] * b[k][j];
      }

      result[i][j] = sum; // sum(a[i][*] * b[*][j]) = 3
    }
  }

  cout << endl;
  cout << endl;
  cout << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
