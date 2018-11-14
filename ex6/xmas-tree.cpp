#include <iostream>

using namespace std;
/*
        X           1
      XXXXX         5
    XXXXXXXXX       9

      XXXXX         5
    XXXXXXXXX       9
  XXXXXXXXXXXXX     13

    XXXXXXXXX       9
  XXXXXXXXXXXXX     13
XXXXXXXXXXXXXXXXX   17


--
       XXX
       XXX
       XXX
*/

int main() {
  const int treeSections = 5;
  const int baseWidth = 3;

  int maxLineWidth = 9 + (treeSections - 1) * 4;

  for (int section = 0; section < treeSections; section++) {
    int firstLineWidth = section * 4 + 1;
    int lastLineWidth = firstLineWidth + 8;

    for (int lineWidth = firstLineWidth; lineWidth <= lastLineWidth; lineWidth += 4) {
      int offset = (maxLineWidth - lineWidth) / 2;
      for (int i = 0; i < offset; i++) {
        cout << " ";
      }

      for (int i = 0; i < lineWidth; i++) {
        cout << "X";
      }
      cout << endl;
    }
  }

  for (int section = 0; section < treeSections; section++) {
    int offset = (maxLineWidth - baseWidth) / 2;
    for (int i = 0; i < offset; i++) {
      cout << " ";
    }
    for (int i = 0; i < baseWidth; i++) {
      cout << "X";
    }
    cout << endl;
  }

/* Path 1
        X           1
      XXXXX         5
    XXXXXXXXX       9
*/

/* Path 2
X           1
XXXXX         5
XXXXXXXXX       9

XXXXX         5
XXXXXXXXX       9
XXXXXXXXXXXXX     13

XXXXXXXXX       9
XXXXXXXXXXXXX     13
XXXXXXXXXXXXXXXXX   17
*/

  return 0;
}
