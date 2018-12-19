#include <iostream>

using namespace std;

void func1(int x) {
  x += 5;
}

void func2(int a[]) {
  a[0] += 5;
}

void func3(int * px) {
  *px += 5;
}


int main() {
  const int x = 42;

  int a = 5;
  int * pa = &a;
  int * px = (int *) 42;

  const int * constPointer = &a;

  float f = 5.2;
  float * pf = &f;

  int * ipf = (int *) pf;

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  char text[100] = "ala bala";

  cout << "a: " << a << endl;
  cout << "pa: " << pa << endl;
  cout << "*pa: " << *pa << endl;
  *pa = 10;
  cout << "a: " << a << endl;
  cout << "pa: " << pa << endl;
  cout << "*pa: " << *pa << endl;
  cout << "constPointer: " << constPointer << endl;
  cout << "*constPointer: " << *constPointer << endl;
  // *constPointer = 5; // compilation error

  cout << "px: " << px << endl;
  // cout << "*px: " << *px << endl; // segmentation fault

  cout << "f: " << f << endl;
  cout << "pf: " << pf << endl;
  cout << "*pf: " << *pf << endl;
  cout << "ipf: " << ipf << endl;
  cout << "*ipf: " << *ipf << endl;

  cout << "pf + 1: " << (pf + 1) << endl;

  int * parr = arr;
  cout << "*parr: " << *parr << endl;
  cout << "*parr+1: " << *(parr + 1) << endl;

  char * ptext = text;
  cout << "*ptext: " << *ptext << endl;
  cout << "*ptext+1: " << *(ptext+1) << endl;

  // "text ... 123"; // const char *
  char mytext[] = "text ... 123"; // char *

  cout << endl << endl;

  int myX = 5;
  int myArr[2] = {1, 2};
  func1(myX);
  cout << "myX: " << myX << endl;
  func2(myArr);
  cout << "myArr[0]:" << myArr[0] << endl;

  func3(&myX);
  cout << "myX: " << myX << endl;



  return 0;
}
