#include <iostream>

using namespace std;

int main() {

  //   row col
  int a[2][3];
  int b[2][3];
  int sum[2][3];

  for (int i = 0; i < 2; i++) { // n
    for (int j = 0; j < 3; j++) { // m
      cout << "Enter value for a[" << i << "][" << j << "]: ";
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 2; i++) { // n
    for (int j = 0; j < 3; j++) { // m
      cout << "Enter value for b[" << i << "][" << j << "]: ";
      cin >> b[i][j];
    }
  }

  // MAGIC!!!
  for (int i = 0; i < 2; i++) { // n
    for (int j = 0; j < 3; j++) { // m
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  cout << endl;
  cout << endl;
  cout << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << sum[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
