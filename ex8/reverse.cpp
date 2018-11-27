#include <iostream>

using namespace std;

int main() {
  int a[1000];
  int n;
  cin >> n; // < 1000

  for (int i = 0; i < n; i++) {
    cout << "A[i]:";
    cin >> a[i];
  }

  for (int i = 0; i < n / 2; i++) {
    int temp = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;



  return 0;
}
