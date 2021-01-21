/* write a program to count blanks, tabs, and newlines */

#include <stdio.h>

int main() {
  int c, b, t, nl;

  b = 0;
  t = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++b;
    } else if (c == '\t') {
      ++t;
    } else if (c == '\n') {
      ++nl;
    } else {
      continue;
    }
  }

  printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, t, nl);
  return 0;
}
