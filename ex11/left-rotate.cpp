#include <iostream>

using namespace std;

/*
  Write a function to left rotate an array.
*/
// FAKE
void leftRotate() {
  int a[100];
  int n;

  cout << "Size of the array: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "A[i] = ";
    cin >> a[i];
  }

  int rotateWith;
  cout << "Rotate with: ";
  cin >> rotateWith;

  // MAGIC ...

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void leftRotateWithOne(int a[], int n) {
  int firstElement = a[0];
  for (int i = 1; i < n; i++) {
    a[i - 1] = a[i];
  }
  a[n - 1] = firstElement;
}

void leftRotate(int a[], int n, int rotateWith) {
  for (int i = 0; i < rotateWith; i++) {
    leftRotateWithOne(a, n);
  }
}

void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int test1[] = {1,2,3,4,5};
  int test2[] = {1,2,3,4,5};
  int test3[] = {1};


  leftRotate(test1, 5, 2); // 3 4 5 1 2
  printArray(test1, 5);

  leftRotate(test2, 5, 7); // 3 4 5 1 2
  printArray(test2, 5);

  leftRotate(test3, 1, 3); // 1
  printArray(test3, 1);


  return 0;
}
