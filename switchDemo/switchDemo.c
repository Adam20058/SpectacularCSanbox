#include <stdio.h>

int main(void)
{
  //Switch statements are another way of doing a multi selection statment. It falls under selection constructs in structure programming.
  // so the app is simple it will say hi to you in three different languages according to the language you select
  // I found it as a great way to demonstrate how switch statements work
  int option;

  printf("\n");
  printf("Enter an option from the menu to say Hi\n");
  printf("1 - English\n");
  printf("2 - French\n");
  printf("3 - Arabic\n\n");

  printf("\n");

  printf("Input your selected number here: ");
  scanf("%d", &option);
  printf("\n\n");

  switch (option)
  {
  case 1:
    printf("Hello\n");
    break;

  case 2:
    printf("Salut!\n");
    break;

  case 3:
    printf("Marhaba!\n");
    break;

  default:
    printf("%d is not a valid option \n", option);
  }

  printf("\n");

  scanf("%*c"); // discard newline from end of previous input
  char optionC;

  printf("Enter an option from the following to say bye in one of the listed languages: \n\n");
  printf("a - English: Bye\n");
  printf("b - French: Au Revoir\n");
  printf("c - Arabic: Ma-as-salama\n\n");

  printf("Input your option: ");
  scanf("%c", &optionC);
  printf("\n\n");

  switch (optionC)
  {

  case 'a':
    printf("Bye\n");
    break;

  case 'A':
    printf("Bye\n");
    break;

  case 'b':
    printf("Au revoir\n");
    break;

  case 'B':
    printf("Au revoir\n");
    break;

  case 'c':
    printf("Au revoir\n");
    break;

  case 'C':
    printf("Au revoir\n");
    break;

  default:
    printf("%c is not a valid option\n", optionC);
  }
  printf("\n");
  return 0;
}