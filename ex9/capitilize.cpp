#include <iostream>
// #include <cstring>

using namespace std;

int main() {
  char text[100];
  // Ala bala KEKS -> ALA BALA KEKS

  cout << "Enter some text: ";
  cin.getline(text, 100);
  cout << text << endl;

  for (int i = 0; text[i]; i++) {
    char c = text[i];
    if ('a' <= c && c <= 'z') {
      text[i] = c - ('a' - 'A');
    }
  }

  cout << "The next text is: " << text << endl;
  return 0;
}
