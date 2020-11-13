#include <stdio.h>

int main(void)
{
  //another 15 minute class break. You know the drill.
  // I created this program to demonstrate the properties of iteration constructs (otherwise known fondly as loops)
  // three types of loops -> while loops, do while loop, for loops
  // Bonus: I'll make a nested loop as well

  //1) while loop
  // it's simple: 1) initilization 2) condition check 3) update variable value 4) Loop if true and IF not true exit loop

  int i;

  printf("Input number of seconds until blastoff: ");
  scanf("%d", &i);
  printf("\n");
  printf("T-minus %d seconds until blast off\n", i);

  printf("\n");

  while (i > 0)
  {
    printf("T-minus %d seconds\n", i);
    i--;
  }

  printf("blastoff!!!!!\n");

  printf("\n");

  // //2) do-while loop
  // // it's simple: 1) executes sequence 2) update variable value 3) checks condition 4) Loop if true and IF not true exit loop

  int j;
  j = 30;
  printf("T-minus 31 seconds to launch\n");
  do
  {
    printf("T-minus %d seconds \n", j);
    if (j == 30)
    {
      printf("Ground launch sequencer is go for auto sequence start\n");
    }
    if (j == 16)
    {
      printf("Activate launch pad sound suppression system \n");
    }
    if (j == 10)
    {
      printf("Activate main engine hydrogen burnoff system \n");
    }
    if (j == 6)
    {
      printf("Starting main engine\n");
    }
    j--;
  } while (j > 0);
  printf("\n");
  printf("blastoff!!!!!!!\n");

  // //another attempt

  printf("\n");

  int a;

  do
  {
    printf("input a positive number (0 to exit): ");
    scanf("%d", &a);
    printf("\n");
    if (a > 0)
    {
      printf("do-while: you typed %d\n", a);
    }

  } while (a > 0);

  printf("\n");

  // //3) For loop
  // // My favourite loop so far: 1) starts off with a for statement comprised of three parts i) initilization 2) condition 3) update
  // //summary: Start -> initilaization -> condition check -> execute sequence if true -> update (return to condition check) ***** if false in condition check it exits the loop

  int h;

  for (h = 10; h > 0; h--)
  {
    printf("T minus %d\n", h);
  }
  printf("Blastoff!!!\n");

  //Bonus round....... Nested loop
  // outer loop runs once and then goes into body. Everytime we reach the body the inner loop goes through multiple times
  // useful when processing arrays

  int k, l;
  for (k = 0; k < 3; k++)
  {
    for (l = k; l >= 0; l--)
    {
      printf("k is %d and l is %d\n", k, l);
    }
  }

  return 0;
}