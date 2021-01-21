/* write a program to print a histogram of the lengths of words in its input. it
 * is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging. */

#include <stdio.h>

#define DIGITS 10

int main() {
  int c, i;
  int ndigit[DIGITS];

  for (i = 0; i < DIGITS; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
    }
  }

  for (i = 0; i < DIGITS; ++i) {
    int j;
    j = 0;

    printf("%d: ", i);

    if (ndigit[i] == 0) {
      putchar(' ');
    } else {
      while (j < ndigit[i]) {
        putchar('+');
        ++j;
      }
    }
    printf("\n");
  }

  return 0;
}
