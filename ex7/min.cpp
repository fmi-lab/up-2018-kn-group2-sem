#include <iostream>

using namespace std;


// The road to hell is paved with Global Variables
const double x = 10.5;

double min(double a, double b) {
  return a < b ? a : b;
}

int main() {
  double a,b,c;
  cin >> a >> b >> c;

  double minValue = min(c, min(a, b));
  cout << minValue << endl;

  return 0;
}
