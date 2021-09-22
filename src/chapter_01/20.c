/* Write a program detab that replaces tabs in the input with the proper number
 * of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
 * every n columns. Should n be a variable or a symbolic parameter? */

#include <stdio.h>

#define MAXLINE 1000
#define NSPACES 4

int getLine(char[], int);
void detab(char[], char[]);

int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

void detab(char in[], char out[]) {
  int i, j, nblanks;

  for (i = j = 0; in[i] != '\0'; ++i) {
    if (in[i] == '\t') {
      nblanks = NSPACES - (j % NSPACES);

      while (--nblanks > 0) {
        out[j++] = ' ';
      }

    } else {
      out[j++] = in[i];
    }
  }

  out[j] = '\0';
}

int main() {
  char in[MAXLINE];
  char out[MAXLINE];

  while ((getLine(in, MAXLINE)) > 0) {
    detab(in, out);
    printf("%s", out);
  }

  return 0;
}
