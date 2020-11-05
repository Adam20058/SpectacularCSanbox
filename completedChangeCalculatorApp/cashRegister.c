#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // Change app part II .... does it solve any real world problems?
  // Not really we got calculators in our phones but it was great way to kill 10 minutes during my class break....
  // Rules of the game:
  //1) to add a dime, nickels, pennies sieve for my cash register
  //2) Display balance owing after each seperation

  double amtPaid, change, quartersR, changeQ, dimesR, changeD, nickelsR, changeN, penniesR, changeP;
  int numLoonies, numQuarters, numDimes, numNickels, numPennies;
  const double gst = .13;

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

  //dimes
  dimesR = changeQ / 0.10;
  numDimes = dimesR;
  changeD = changeQ - (numDimes * .10);
  printf("Total dimes : %d, Balance owing is: %.2lf \n", numDimes, changeD);

  //nickels
  nickelsR = changeD / 0.05;
  numNickels = nickelsR;
  changeN = changeD - (numNickels * 0.05);
  printf("Total nickels: %d, Balance owing is: %.2lf \n", numNickels, changeN);

  //pennies
  penniesR = changeN / 0.01;    // cN = 0.03 -> 0.03/0.01
  numPennies = penniesR + 0.05; // error???
  changeP = changeN - (numPennies * 0.01);

  printf("Total pennies: %d, Balance Owing is: %.2lf \n", numPennies, changeP);

  return 0;
}

// Try it out by inputting $8.68. If it works, your Output should be:
// Total loonies: 8, Balance Owing: 0.68
// Total Quarters: 2, Balance Owing: 0.18
// Total Dimes: 1, Balance Owing: 0.08
// Total nNickels: 1, Balance Owing: 0.03
// Total Pennies: 3, Balance Owing: 0.00
