#include <stdio.h>
//*** this program finds the prime numbers between 0 to 10 ***

//*** Well what is a prime? ****

//Prime is a number that is divisible only 1 and itself
//Basically primes are numbers that have only 2 factors -> 1 and themselves.

int main(void)
{
  int i, n = 0, j, prime = 0;

  for (i = 0; i < 100; i++)
  {
    prime = 1;

    for (j = i - 1; j > 1; j--) // subtracted the i variable by 1. To prevent J from dividing from it self in the if condition nested inside
    {
      //printf("%d mod %d = %d \n", i, j, i % j); // added a printf statement to see what were the updates on the variable values
      if (i % j == 0) //added curly braces for all the nested elements just to make it easy to follow
      {
        prime = 0;
      }
    }
    if (prime) // added curly braces for nested elements just for easy read
    {
      if (i > 1) // added this to remove 0 and 1. Since they're not considered prime numbers
      {
        printf("%d is prime \n", i);
        n++;
      }
    }
  }
  printf("\n");
  printf("Between the numbers 0 - 100, There are %d prime numbers\n\n", n);
  return 0;
}

/*int main(void)
{
  int i, j, prime = 0;

  for (i = 0; i < 10; i++)
  {
    prime = 1;
    for (j = i; j > 1; j--)
    {
      if (i % j == 0)
        prime = 0;
    }
    if (prime)
      printf("%d is prime \n", i);
  }

  return 0;
}
*/