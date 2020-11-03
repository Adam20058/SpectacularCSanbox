#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int yourValue;

  printf("---------------------------------------------------------------------------------------\n");
  printf("| Welcome to my even or odd application                                                |\n");
  printf("| In the world of pesky remainders this nifty program is your superman no pun intended | \n");
  printf("| It can tell you the remainder of the numbers you inputted                            | \n");
  printf("| It can tell you if your number is even or odd. Enjoy!!!!                             | \n");
  printf("---------------------------------------------------------------------------------------\n");

  printf("Input your value: ");
  scanf("%d", &yourValue);
  printf("\n");
  printf("You inputted the value %d\n\n", yourValue);

  if (yourValue % 2 == 0)
  {
    printf("%d is an even number\n\n", yourValue);
  }
  else
  {
    printf("%d is an odd number\n\n", yourValue);
  }
  return 0;
}

