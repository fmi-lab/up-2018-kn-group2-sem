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

  // над главния диагонал
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        int temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
    }
  }

  // // под главния диагонал
  // for (int i = 1; i < n; i++) {
  //   for (int j = 0; j < i; j++) {
  //       int temp = a[i][j];
  //       a[i][j] = a[j][i];
  //       a[j][i] = temp;
  //   }
  // }

  cout << endl;
  cout << endl;
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  // TEST DATA
  // OK 3 1 0 0 0 1 0 0 0 1

  return 0;
}
