/* write a program to print the corresponding celsius to fahrenheit table */

#include <stdio.h>

/* print celsius-fahrenheit table */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("Celsius\tFahr\n");

  while (celsius <= upper) {
    fahr = (celsius / (5.0 / 9.0)) + 32.0;
    printf("%3.0f\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
