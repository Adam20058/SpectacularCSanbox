#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // Change app.... does it solve any real world problems?
  // Not really we got calculators in our phones but it was great way to kill 5 minutes....
  double ttl, ttlQuart, change;
  int loonies, quarters, remainder;

  printf("\n");
  printf(" ------------------------------------------------\n");
  printf("||                                              ||\n");
  printf("||*** Welcome To The Great Change Calculator ***||\n");
  printf("||                                              ||\n");
  printf(" ------------------------------------------------\n");

  printf("\n");
  printf("Please enter the amount to be paid: $");
  scanf("%lf", &ttl);
  printf("\n");

  printf("Your amount total: $%.2lf\n", ttl);

  loonies = (int)ttl;
  change = ttl - (double)loonies;
  printf("Total loonies: %d, Balance Owing: %.2lf \n", loonies, change);

  ttlQuart = change / 0.25;
  quarters = ttlQuart;
  change = ttlQuart - (double)quarters;
  printf("Total quarters: %d, Balance Owing: %.2lf \n", quarters, change);

  //printf("Total Quarters: %d\n", quarters);

  return 0;
}

// Try it out by inputting $10.45. Your Output should be:
// Total loonies: 10, Balance Owing: 0.45
// Total Quarters: 1, Balance Owing: 0.20
