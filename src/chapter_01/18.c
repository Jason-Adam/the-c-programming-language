/* write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines */

#include <stdio.h>

#define MAXLINE 10000

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      printf("%d", c);
    } else if (c != '\t') {
      printf("%d", c);
    } else if (c == '\n') {
      printf("\n");
    }
  }

  return 0;
}
