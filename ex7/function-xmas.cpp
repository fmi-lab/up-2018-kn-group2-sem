#include <iostream>

using namespace std;

void drawOffset(int width, int maxLineWidth) {
  int offset = (maxLineWidth - width) / 2;
  for (int i = 0; i < offset; i++) {
    cout << " ";
  }
}

void drawTreeBranch(int width) {
  for (int i = 0; i < width; i++) {
    cout << "X";
  }
  cout << endl;
}

void drawTreeSections(int, int); // Декларация
void drawLine(int, int);

void drawTreeSections(int treeSections, int maxLineWidth) { // Дефиниция
  for (int section = 0; section < treeSections; section++) {
    int firstLineWidth = section * 4 + 1;
    int lastLineWidth = firstLineWidth + 8;

    for (int lineWidth = firstLineWidth; lineWidth <= lastLineWidth; lineWidth += 4) {
      drawLine(lineWidth, maxLineWidth);
    }
  }
}

void drawTreeBase(int treeSections, int baseWidth, int maxLineWidth) {
  for (int section = 0; section < treeSections; section++) {
    drawLine(baseWidth, maxLineWidth);
  }
}

void drawLine(int width, int maxLineWidth) {
  drawOffset(width, maxLineWidth);
  drawTreeBranch(width);
}

void drawXMasTree(int treeSections, int baseWidth) {
  int maxLineWidth = 9 + (treeSections - 1) * 4;
  drawTreeSections(treeSections, maxLineWidth);
  drawTreeBase(treeSections, baseWidth, maxLineWidth);
}

int main() {
  const int treeSections = 5;
  const int baseWidth = 3;

  drawXMasTree(treeSections, baseWidth);
  drawXMasTree(3, baseWidth);
  drawXMasTree(2, baseWidth);
  drawXMasTree(1, baseWidth);
  drawXMasTree(6, baseWidth);

  return 0;
}
