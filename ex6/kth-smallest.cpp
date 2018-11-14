#include <iostream>

using namespace std;

int main() {
  int a[1000];

  int n;
  cout << "Enter n: ";
  cin >> n;

  int k;
  cout << "Enter k: ";
  cin >> k;

  cout << "Enter the numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // k == 1;
  bool hasLastMin = false;
  int lastMin = 0;
  for (int j = 0; j < k; j++) {
    int min = 0;
    bool hasMin = false;

    for (int i = 0; i < n; i++) {
      if (hasLastMin && a[i] <= lastMin) {
        continue;
      }

      if (hasMin && a[i] < min) {
        min = a[i];
      } else if (!hasMin) {
        min = a[i];
        hasMin = true;
      }
    }
    lastMin = min;
    hasLastMin = true;
    cout << "The min value is: " << min << endl;
  }

  // int lastMin = a[0];
  // for (int i = 0; i < n; i++) {
  //   if (a[i] < lastMin) {
  //     lastMin = a[i];
  //   }
  // }
  // cout << "The min value is: " << lastMin << endl;

  // for (int j = 1; j < k; j++) {
  //   int min = a[0];
  //   for (int i = 0; i < n; i++) {
  //     if (a[i] < min  && a[i] > lastMin) {
  //       min = a[i];
  //     }
  //   }
  //   lastMin = min;
  //   cout << "The min value is: " << min << endl;
  // }






  return 0;
}
