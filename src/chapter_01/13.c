/* write a program to print a histogram of the lengths of words in its input. it
 * is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging. */

#include <stdio.h>

#define MAX_WORD_LEN 20
#define IN 1
#define OUT 0

int main() {
  int c, i, state, j, wl;
  int ndigit[MAX_WORD_LEN];

  for (i = 0; i < MAX_WORD_LEN; ++i) {
    ndigit[i] = 0;
  }

  state = OUT;
  wl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;

      if (wl < MAX_WORD_LEN) {
        ++ndigit[wl];
      }

      wl = 0;
    } else if (state == OUT) {
      state = IN;
    } else {
      ++wl;
    }
  }

  for (i = 0; i < MAX_WORD_LEN; ++i) {
    j = 0;

    printf("%d: ", i + 1);

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
