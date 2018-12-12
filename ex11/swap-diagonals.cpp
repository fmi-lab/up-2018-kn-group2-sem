#include <iostream>

using namespace std;

/*
  Write a function to interchange diagonals of a matrix.
*/
// fake
void swapDiagonals() {
  int a[100][100];
  int n;

  // input
  cout << "N: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  // magic...


  // output
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

void swapDiagonals(int a[100][100], int n) {
  for (int i = 0; i < n; i++) {
    swap(a[i][i], a[i][n - 1 - i]);
    // int temp = a[i][i];
    // a[i][i] = a[i][n - 1 - i];
    // a[i][n - 1 - i] = temp;
  }
}

void printMatrix(int a[100][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}


int main() {
  int a1[100][100] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
  int a2[100][100] = {
    {1, 0, 0, 0, 2},
    {0, 10, 0, 20, 0},
    {0, 0, 30, 0, 0},
    {0, 40, 0, 4, 0},
    {50, 0, 0, 0, 5}
  };

  swapDiagonals(a1, 4);
  printMatrix(a1, 4);

  cout << endl;
  cout << endl;
  cout << endl;

  swapDiagonals(a2, 5);
  printMatrix(a2, 5);


  return 0;
}
