#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // Change app.... does it solve any real world problems?
  // Not really we got calculators in our phones but it was great way to kill 5 minutes....
  double amtPaid, change, quartersR, changeQ, dimesR, changeD, nickelsR, changeN, penniesR, changeP;
  int numLoonies, numQuarters, numDimes, numNickels, numPennies;

  printf("\n");
  printf(" ------------------------------------------------\n");
  printf("||                                              ||\n");
  printf("||*** Welcome To The Great Change Calculator ***||\n");
  printf("||                                              ||\n");
  printf(" ------------------------------------------------\n");

  printf("\n");
  printf("Please enter the amount to be paid: $");
  scanf("%lf", &amtPaid);
  printf("\n");

  printf("Your amount total: $%.2lf\n", amtPaid);

  numLoonies = amtPaid;
  change = amtPaid - (double)numLoonies;

  printf("Total loonies: %d, Balance Owing: %.2lf \n", numLoonies, change);

  // quarter

  quartersR = change / 0.25;
  numQuarters = quartersR;
  changeQ = change - (numQuarters * .25);

  printf("Total quarters is %d, Balance owing is: %.2lf \n", numQuarters, changeQ);

  return 0;
}

// Try it out by inputting $10.45. Your Output should be:
// Total loonies: 10, Balance Owing: 0.45
// Total Quarters: 1, Balance Owing: 0.20
