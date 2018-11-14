#include <iostream>

using namespace std;

int main() {
  int isComposit[100] = {0};

  for (int i = 2; i < 100; i++) {
    if (isComposit[i] == true) { // not a prime
      continue;
    }

    // mark all numbers which are divided by i
    for (int j = i + i; j < 100; j += i) {
      isComposit[j] = true;
    }
  }

  for (int i = 2; i < 100; i++) {
    if (!isComposit[i]) {
      cout << i << ", ";
    }
  }
  cout << endl;

  return 0;
}
