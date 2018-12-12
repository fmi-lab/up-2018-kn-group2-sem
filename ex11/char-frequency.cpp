#include <iostream>

using namespace std;

/*
  Write a function to count frequency of each character in a string.
*/
// FAKE
void countFrequencies() {
  char text[1000];
  cout << "Text: ";
  cin.getline(text, 1000);

  // magic

  // result
}
void countFrequencies(char text[]) {
  bool isFirstRun = true;
  for (unsigned char currentChar = 0; isFirstRun && ((int) currentChar) <= 255; currentChar++) {
    if (currentChar == 255) {
      isFirstRun = false;
    }

    int counter = 0;
    for (int i = 0; text[i] != '\0'; i++) {
      if (text[i] == currentChar) {
        counter++;
      }
    }
    if (counter != 0) {
      cout << currentChar << ": " << counter << endl;
    }
  }
}

void countFrequencies(char text[], int frequencies[256]) {
  for (int i = 0; text[i] != '\0'; i++) {
    frequencies[text[i]]++;
  }
}

int main() {
  char text[1000];
  cout << "Text: ";
  cin.getline(text, 1000);

  int frequencies[256] = {0};
  countFrequencies(text);

  // for (int i = 0; i < 256; i++) {
  //   if (frequencies[i] != 0) {
  //     cout << (char) i << ": " << frequencies[i] << endl;
  //   }
  // }

  return 0;
}
