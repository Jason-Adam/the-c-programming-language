/* rewrite the temperature conversion program of section 1.2 to use a function
 * for conversion */

#include <stdio.h>

float convert_fahr_cels(float fahr) { return (5.0 / 9.0) * (fahr - 32.0); }

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = convert_fahr_cels(fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
