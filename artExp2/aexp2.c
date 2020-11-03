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
  printf("\n");

  // Another thing to consider
  // To convert intergers to floating point values. We have 2 different ways of accomplishing this:
  // 1. Use mix mode expression ->
  // (a) By casting one of the integers you'll be able to divide it
  // (b) By adding a decimal point to the value itself you can divide it as well

  double test;

  test = (double)4 / 5;
  printf("test is %0.2lf \n", test);
  printf("\n");

  d = 2 / 3;
  printf("d is %0.2lf \n", d);
  printf("\n");

  // In summary both methods helps you retain the fraction ... prevents the computer from losing it

  // some shortcuts to take in mind.... lets compare long form and short form

  //LONG WAY ---> alot of people do operations like this by taking the value of the variable itself and do something to it and then assign it to itself.... so they modify it
  // how ever there is a shorter way of doing this

  b = 5;
  b = b * 2;

  printf("%d\n", b);
  printf("\n");

  // shortcut notation
  // you simply combine the operator with equal....
  // (e.g) b *= 2, this would translate to b is equal to b multiplied by 2
  // (e.g) c -=2, this would translate to b is equal to b subtract by 2

  b /= 2;
  printf("%d\n", b);
  printf("\n");

  return 0;
}