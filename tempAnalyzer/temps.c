#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int highTemp, lowTemp, i;
  int sumHighT = 0, sumLowT = 0;
  double meanTemp;

  printf("\n---=== IPC Temperature Analyzer ===---\n\n"); // title of my application

  for (i = 1; i <= 3; i++)
  {
    do
    {
      //enter the high value for day #
      printf("Enter the high value for day %d: ", i);
      scanf("%i", &highTemp);
      printf("\n");
      //enter the low value for day #

      printf("Enter the low value for day %d: ", i);
      scanf("%i", &lowTemp);
      printf("\n");
      if (highTemp > 40 || lowTemp < -40 || highTemp < lowTemp)
      {
        printf("Incorrect values, temperatures must be in the range of -40 to 40, high must be greater than low.\n");
        printf("\n");
      }
      else
      {
        sumHighT += highTemp;
        sumLowT += lowTemp;
        meanTemp = (sumHighT + sumLowT) / (double)(i * 2);
      }
    } while (highTemp > 40 || lowTemp < -40 || highTemp < lowTemp);
  }
  printf("The average temperature is %.2f\n\n", meanTemp);

  return 0;
}