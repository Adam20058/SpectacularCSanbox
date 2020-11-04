#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // revision of relational and logical expressions

  int a, b, c, d;

  a = 1;

  c = a == 1; // true because a is equal to 1
  d = a > 1;  // false since a is not greater than 1

  printf("a == 1 is %d and %d\n", c, d);

  int adult, child, senior;

  child = 0;
  senior = 0;

  adult = !child && !senior;
  printf("If child = %d and senior = %d, then adult = %d\n", child, senior, adult);

  adult = !(child || senior); // DeMorgan's Theorem at play. Thank you Augustus De Morgan!
  printf("If child = %d and senior = %d, then adult = %d\n", child, senior, adult);
  printf("\n");
  int employed, workingAdult;

  employed = 1;
  workingAdult = !(child || senior) && employed;
  printf("child = %d and senior = %d and adult = %d and employed = %d, then working adult = %d\n\n", child, senior, adult, employed, workingAdult);

  return 0;
}
