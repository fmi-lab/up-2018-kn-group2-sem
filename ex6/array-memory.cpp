#include <iostream>

using namespace std;

int main() {
  int a[1000];

  int n;
  cout << "Enter n: ";
  cin >> n; // n > 0 && n < 1000

  for (int i = 0; i < n; i++) {
    cout << "Value for a[" << i << "]:";
    cin >> a[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  cout << "Reversed list of numbers: " << endl;
  for (int i = n - 1; i >= 0; i--) {
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "The sum is: " << sum << endl;
  for (int i = 0; i < n; i++) {
    cout << i << ": "<< a[i] << endl;
  }



  return 0;
}
