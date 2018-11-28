#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[100];
  cout << "Enter some text: ";
  cin.getline(text, 100);

  char wordToReplace[10];
  cout << "Word to replace: ";
  cin.getline(wordToReplace, 10);

  char wordToReplaceWith[10];
  cout << "Replace with: ";
  cin.getline(wordToReplaceWith, 10);

  if (strlen(wordToReplace) != strlen(wordToReplaceWith)) {
    cout << "ERROR" << endl;
    return 1;
  }

  int len = strlen(text) - strlen(wordToReplace) + 1;
  for (int i = 0; i < len; i++) {
    bool shouldReplaceWord = true;
    for (int j = 0; shouldReplaceWord && wordToReplace[j]; j++) {
      if (wordToReplace[j] != text[i + j]) {
        shouldReplaceWord = false;
      }
    }

    if (shouldReplaceWord) {
      for (int j = 0; wordToReplaceWith[j]; j++) {
        text[i + j] = wordToReplaceWith[j];
      }
      // i += strlen(wordToReplaceWith) - 1;
    }
  }

  cout << "The new text is: " << endl;
  cout << ">>>>>>>>>>>>> " << text << endl;

  return 0;
}
