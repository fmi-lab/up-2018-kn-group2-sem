#include <iostream>
using namespace std;

int fib(int n, int fibn_1, int fibn_2) {
  if (n == 0) {
    return fibn_2;
  }

  return fib(n - 1, fibn_1 + fibn_2, fibn_1);
}

int fib(int n) {
  return fib(n, 1, 0);
}


int fibNaive(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  return fibNaive(n - 1) + fibNaive(n - 2);
}

int main() {
  cout << fibNaive(0) << endl;
  cout << fibNaive(1) << endl;
  cout << fibNaive(2) << endl;
  cout << fibNaive(3) << endl;
  cout << fibNaive(4) << endl;
  cout << fibNaive(5) << endl;
  cout << fibNaive(6) << endl;
  cout << fibNaive(7) << endl;
  cout << fibNaive(8) << endl;
  cout << fibNaive(9) << endl;
  cout << fibNaive(45) << endl;
  return 0;
}

