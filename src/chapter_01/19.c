/* write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline) {
  int c, i;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

void reverse(char line[]) {
  int i, j, len, temp;

  len = 0;
  for (i = 0; line[i] != '\0'; ++i) {
    ++len;
  }

  /* swap in place using two pointers */
  for (i = 0, j = len - 1; i < len / 2; ++i, --j) {
    temp = line[i];
    line[i] = line[j];
    line[j] = temp;
  }
}

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    line[--len] = '\0';
    reverse(line);
    printf("%s\n", line);
  }

  return 0;
}
