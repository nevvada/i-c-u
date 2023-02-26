#include <stdio.h>

// main()
// {
//   float fahr, celsius;
//   float lower, upper, step;

//   lower = 0; /* lower limit of temperature scale */
//   upper = 300; /* upper limit */
//   step = 20; /* step size */

//   fahr = lower;

//   printf("Fahr\tCels\n");

//   while (fahr <= upper) {
//     celsius = (5.0/9.0) * (fahr - 32.0);
//     printf("%3.1f\t%6.1f\n", fahr, celsius);
//     fahr = fahr + step;
//   }
// }

int main() {
  // symbolic constants, not variables. uppercase to distinguish from lowercase variable names
  #define LOWER 0 /* lower limit of table */
  #define UPPER 300 /* upper limit */
  #define STEP 20

  int fahr;

  for (fahr = UPPER; fahr >= LOWER ; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
