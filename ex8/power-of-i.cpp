#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a[1000];
  int n;
  cout << "n=";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    int powOfI = 1;
    for (int k = 0; k < i; k++) {
      powOfI *= a[i];
    }
    a[i] = powOfI;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
