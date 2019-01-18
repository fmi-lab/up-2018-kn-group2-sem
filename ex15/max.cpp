#include <iostream>

using namespace std;

int max2(int a, int b) {
  return a > b ? a : b;
}

int maxN(int a[], int n) {
  if (n == 1) {
    return a[0];
  }
  if (n == 2) {
    return max2(a[0], a[1]);
  }
  return max2(a[n - 1], maxN(a, n - 1));
  // return max2(a[0], maxN(a + 1, n - 1)); // option 2
}


int main() {
  int test1[] = {1};
  int test2[] = {1, 2};
  int test3[] = {1, 2, 3};
  int test4[] = {1, 2, 3, 5, 100, -5, 113};

  cout << "  1 == " << max(test1, 1) << endl;
  cout << "  2 == " << max(test2, 2) << endl;
  cout << "  3 == " << max(test3, 3) << endl;
  cout << "113 == " << max(test4, 7) << endl;

  return 0;
}
