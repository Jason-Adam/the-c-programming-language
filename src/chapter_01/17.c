/* Write a program to print all the input lines that are longer than 80
 * characters. */

#include <stdio.h>

#define MAXLINE 10000
#define LIMIT 80

int gline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

int main() {
  int len;
  char line[MAXLINE];

  while ((len = gline(line, MAXLINE)) > 0) {
    if (len > LIMIT) {
      printf("%s", line);
    }
  }

  return 0;
}
