#include <iostream>

using namespace std;

int readPoly(int poly[]) {
  int n;
  cout << "n = ";
  cin >> n;

  n++;
  for (int i = 0; i < n; i++) {
    cin >> poly[i];
  }
  return n;
}

void outputPoly(int poly[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    if (poly[i] != 0) {
      if (i == 0) {
        cout << poly[i];
      } else {
        cout << poly[i] << "x^" << i << " + ";
      }
    }
  }
  cout << endl;
}

void derivative(int poly[], int deriv[], int n) {
  for (int i = 1; i < n; i++) {
    deriv[i - 1] = i * poly[i];
  }
}

void multiply(int poly[], int n, int x) {
  for (int i = 0; i < n; i++) {
    poly[i] *= x;
  }
}

void sum(int result[], int poly1[], int poly2[], int n1, int n2) {
  int n = n1 < n2 ? n2 : n1;

  for (int i = 0; i < n; i++) {
    result[i] = (i < n1 ? poly1[i] : 0)
              + (i < n2 ? poly2[i] : 0);
  }
}


void af(int poly[], int result[], int n, int fpoly[], int fn) {
  for (int i = 0; i < fn; i++) {
    if (i == 0) {
      sum(result, result, poly, n, n);
      // a.k.a. result += poly;
      multiply(result, n, fpoly[i]);
    }
    if (i == 1) {
      int der[100];
      derivative(poly, der, n);
      multiply(der, n, fpoly[i]);
      sum(result, result, der, n, n - 1);
      // result += der
    }
    if (i == 2 ) {
      int der[100];
      derivative(poly, der, n);
      derivative(der, der, n - 1);
      multiply(der, n, fpoly[i]);
      sum(result, result, der, n, n - 2);
      // result += der
    }
  }
}

void af(int poly[], int result[], int n) {
  int der_1[100];
  int der_2[100];

  derivative(poly, der_1, n);
  derivative(der_1, der_2, n-1);

  multiply(der_1, n - 1, 4);
  multiply(der_2, n - 2, 8);

  sum(result, der_1, der_2, n - 1, n - 2);
}

int main() {
  int poly[100];
  int n = readPoly(poly);

  int poly_1[100];
  derivative(poly, poly_1, n);

  // outputPoly(poly, n);
  // outputPoly(poly_1, n - 1);

  int afResult[100];
  af(poly, afResult, n);
  outputPoly(afResult, n);


  int fpoly[] = {0, 4, 8};
  int fn = 3;
  int newResult[100] = {0};
  af(poly, newResult, n, fpoly, 3);
  outputPoly(newResult, n);
}


