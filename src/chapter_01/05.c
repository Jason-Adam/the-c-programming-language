/* modify the temperature conversion program to print the table in reverse order
 * from 300 to 0 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print fahrenheit-celsius table */
int main() {
  int fahr;

  printf("Fahr\tCelsius\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }

  return 0;
}
