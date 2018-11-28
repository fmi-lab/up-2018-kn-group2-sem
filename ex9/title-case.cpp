#include <iostream>

using namespace std;

int main() {
  char text[100];
  cout << "Enter some text: ";
  cin.getline(text, 100);
  cout << text << endl;

  bool isFirstLetter = true;
  for (int i = 0; text[i]; i++) {
    if (isFirstLetter) { // first letter of a word
      if ('a' <= text[i] && text[i] <= 'z') {
        text[i] = text[i] - ('a' - 'A'); // to upper case
      }
      isFirstLetter = false;

    } else if ('A' <= text[i] && text[i] <= 'Z') { // in word
      text[i] = text[i] - ('A' - 'a'); // to lower case

    } else if (' ' == text[i] ||
               '!' == text[i] ||
               '?' == text[i] ||
               '.' == text[i] ||
               ',' == text[i]) { // end of word
      isFirstLetter = true;
    }
  }

  cout << "The next text is: " << text << endl;
  return 0;
}
