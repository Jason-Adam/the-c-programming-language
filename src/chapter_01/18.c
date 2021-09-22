/* write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines */

#include <stdio.h>

#define MAXLINE 10000

int getLine(char[], int);
int rightTrim(char[], int);

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

int rightTrim(char s[], int len) {
  int nw = 0;

  if (s[--len] == '\n') {
    s[len] = '\0';
    nw = 1;
  }

  while (--len >= 0 && (s[len] == ' ' || s[len] == '\t')) {
    s[len] = '\0';
  }

  ++len;

  if (nw) {
    s[len] = '\n';
  }

  return ++len;
}

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    len = rightTrim(line, len);

    if (len == 1 && line[0] == '\n') {
      line[0] = '\0';
    }

    printf("%s", line);
  }

  return 0;
}
