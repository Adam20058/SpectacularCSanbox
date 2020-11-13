//debug challenge
// this program defines the prime between 0-5
// A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself.
// it's important to note this is not an accurate program since it doesn't negate 0 and 1 from prime numbers

#include <stdio.h>

// int main(void)
// {
//   int i, j, prime = 0;

//   for (i = 0; i < 6; i++)
//   {
//     prime = 1;
//     for (j = i; j > 1; j--)
//     {
//       if (i % j == 0)
//         prime = 0;
//     }
//     if (prime)
//       printf("%d is prime\n", i);
//   }

int main(void)
{
  // I used printf statement to debug this code
  // printf statement output indicates to me I'm dividing the numbers by itself

  int i, j, prime = 0;

  for (i = 0; i < 6; i++)
  {
    prime = 1;
    for (j = i - 1; j > 1; j--) // subtracted i by 1 to solve this
    {
      printf("i = %d j = %d  prime = %d\n", i, j, prime);
      if (i % j == 0)
        prime = 0;
    }
    if (prime)
      printf("%d is prime\n", i);
  }
  return 0;
}
