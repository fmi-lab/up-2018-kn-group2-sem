#include <iostream>

using namespace std;

void readMatrix1(int a[][5], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }
}

bool areEqual1(int a[5][5], int b[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (a[i][j] != b[i][j]) {
        return false;
      }
    }
  }
  return true;
}

void readMatrix2(int a[][500], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
}

bool areEqual2(int a[][500], int b[][500], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] != b[i][j]) {
        return false;
      }
    }
  }
  return true;
}


void readMatrix(int * a, int n, int m, int cols) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> *(a + i * cols + j);
    }
  }
}

bool areEqual(int * a, int * b, int n, int m, int colsA, int colsB) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (*(a + i * colsA + j) != *(b + i * colsB + j)) {
        return false;
      }
    }
  }
  return true;
}


int main() {
  int a[500][500];
  int b[100][100];

  int n;
  int m;
  cout << "Number of rows: ";
  cin >> n;
  cout << "Number of columns: ";
  cin >> m; // n, m > 0 && n, m < MAX_SIZE

  readMatrix(&a[0][0], n, m, 500);
  readMatrix(&b[0][0], n, m, 100);

  if (areEqual(&a[0][0], &b[0][0], n, m, 500, 100)) {
    cout << "They are EQUAL!!!" << endl;
  } else {
    cout << "They are NOT equal!!!" << endl;
  }
}
