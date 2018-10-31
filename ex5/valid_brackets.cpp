#include <iostream>

using namespace std;

int main() {

  bool hasValidBrackets = true;
  int openedBrackets = 0;

  while (true) {
    char c;
    cin >> c;
    if (c == ';') {
      break;
    }

    if (c == '(') {
      openedBrackets++;
    }

    if (c == ')') {
      openedBrackets--;
      if (openedBrackets < 0) {
        hasValidBrackets = false;
        // break;
      }
    }
  }

  hasValidBrackets = hasValidBrackets && openedBrackets == 0;

  if (hasValidBrackets) {
    cout << "The expression has valid brackets" << endl;
  } else {
    cout << "The expression DOES NOT HAVE valid brackets" << endl;
  }

  // char c;
  // cin >> c;
  // while (c != ';') {
  //   // magic
  //   cout << "c: "
  //   cin >> c;
  // }

  // char c;
  // do {
  //   cin >> c;
  //   // special magic
  // } while (c != ';');

}
