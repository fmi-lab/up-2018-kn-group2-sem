#include <iostream>
// #include <cstring>

using namespace std;

int main() {
  char str[] = {'d','o','b','r','o',' ',
                'u','t','r','o', '\0'};

  char text[100];

  // cout << "Enter some text: ";
  // cin >> text;
  // cout << text << endl;

  cout << "Enter some text: ";
  cin.getline(text, 100);
  cout << text << endl;

  int length = 0;
  // while (text[i] != '\0') {
  // while (text[i] != 0) {
  while (text[length]) {
    length++;
  }

  cout << "The length of the text is: " << length << endl;


  return 0;
}
