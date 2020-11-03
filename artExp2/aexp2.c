#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
  // This is a simple program that rounds the user's value.
  // It does this by using two methods 1) printf function 2) created a rule before the output.

  int a, b, c;
  double d;

  // Method 1:
  // By using adding .0 in the format specifier %lf.
  // We are telling the computer you want zero places after the decimal places.
  // So you'll round up the nearest whole number.

  printf("Input a decimal value you wish to round: ");
  scanf("%lf", &d);
  printf("\n");
  printf("The rounded version of the value you inputted is %.0lf\n\n", d);

  // Method 2:
  //Demonstration of how to round up my values manually....
  // created a simple rule
  // the rule is simple:
  // if value decimal value > 0.5, the computer will round up the number
  // if value decimal value < 0.5, the computer will round down the number

  printf("Input another decimal value you wish to round: ");
  scanf("%lf", &d);
  printf("\n");
  c = d + 0.5;
  printf("if you round up d you'll get %d\n", c);

  return 0;
}