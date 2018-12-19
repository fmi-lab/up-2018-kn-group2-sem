#include <iostream>

using namespace std;

/*
01. Replace string in a string
_ 01.1 - same length
  text: al ala bala a keks al
  replace: ala
  with: xxx
  -> al xxx bxxx a keks al

01.2 - same length or shorter
  text: ala bala a keks
  replace: ala
  with: XX
  XX bXX a keks


01.3 - new text is longer
  text: ala bala a keks
  replace: ala
  with: XXXX
  XXXX bXXXX a keks
*/
bool isMatching(const char * text, const char * word) {
  for (int i = 0; *(word + i); i++) {
    if ( *(text + i) != *(word + i) ) { // text[i] != word[i]
      return false;
    }
  }
  return true;
}

void doReplace(char * text, const char * replaceWith) {
  for (int i = 0; *(replaceWith + i); i++) {
    *(text + i) = *(replaceWith + i);
  }
}

void shiftLeft(char * text, int k) {
  int i = 0;
  for (; *(text + i); i++) {
    *(text + i - k) = *(text + i);
  }
  *(text + i - k) = *(text + i); // copy \0
}

void shiftRight(char * text, int k) {
  int textLen = strlen(text);
  for (int i = textLen + 1; i >= 0; i--) {
    *(text + i + k) = *(text + i);
  }
}

void replace(char * text, const char * word, const char * replaceWith, int maxSize) {
  cout << "Replace with 4 params" << endl;
  for (int i = 0; *(text + i); i++) {
    if (isMatching(text + i, word)) {
      int wordLen = strlen(word);
      int replaceWithLen = strlen(replaceWith);

      if (wordLen > replaceWithLen) {
        doReplace(text + i, replaceWith);
        shiftLeft(text + i + wordLen, wordLen - replaceWithLen);

      } else if (wordLen < replaceWithLen) {
        if (strlen(text) + replaceWithLen - wordLen <= maxSize) {
          shiftRight(text + i + wordLen, replaceWithLen - wordLen);
          doReplace(text + i, replaceWith);
        }
      } else { // wordLen == replaceWithLen
        doReplace(text + i, replaceWith);
      }
    }
  }
}

void replace(char * text, const char * word, const char * replaceWith) {
  cout << "Replace with 3 params" << endl;
  replace(text, word, replaceWith, strlen(text));
}

int main() {
  char text1[] = "al ala bala a keks al";
  replace(text1, "ala", "xxx");
  cout << endl;
  cout << "expected: " << "al xxx bxxx a keks al" << endl;
  cout << "actual  : " << text1 << endl;

  cout << endl << "Shorter replace string" << endl;
  char text2[] = "ala bala a keks";
  replace(text2, "ala", "XX");
  cout << "expected: " << "XX bXX a keks" << endl;
  cout << "actual  : " << text2 << endl;

  cout << endl << "Longer replace string (replace both)" << endl;
  char text3[20] = "ala bala a keks";
  replace(text3, "ala", "XXXX", 20);
  cout << "expected: " << "XXXX bXXXX a keks" << endl;
  cout << "actual  : " << text3 << endl;

  cout << endl << "Longer replace string" << endl;
  char text4[16] = "ala bala a keks";
  replace(text4, "ala", "XXXX", 16);
  cout << "expected: " << "XXXX bala a keks" << endl;
  cout << "actual  : " << text4 << endl;

  return 0;
}
