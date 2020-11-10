#include <stdio.h>

// quick recap on the selection constructs
// Remember that there are three versions I can use 1) optional sequences 2) alternative sequences 3) conditional expressions
// In the end of the day use the most effective and clear solution for the long term

int main(void)
{
  int a = 10, option = 0, c = 10;

  //this is my demo of an optional sequence
  // concept is simple: condition is true execute a sequence and then head to exit point BUT if false skip it and head straight to the exit point moving on to the next thing in the program

  if (a > 5)
  {
    printf("%d is greater than 5\n", a);
  }

  //This is my demo of an alternative sequence
  // concept is just one step more than optional sequence: instead of one branch of executed statement that depend on the condition. Alternative sequence has two branches which both meet at the same exit point. Only completion of one branch is needed in order for program to move past the statement

  if (a > 10)
  {
    printf("%d is greater than 10\n", a);
  }
  else
  {
    printf("%d is less than or equal 10\n", a);
  }

  // you can also use nested if

  // if (a >= 10)
  // {
  //   printf("%d is greater than or equal to 10 and is ", a);
  //   if ((a % 2) == 0)
  //   {
  //     printf("is even\n");
  //   }
  //   else
  //   {
  //     printf("is odd\n");
  //   }
  // }

  if ((a >= 10) && ((a % 2) == 0))
  {
    printf("%d is greater than or equal to 10 and is even\n", a);
  }
  else
  {
    printf("%d is greater than or equal to 10 and is odd\n", a);
  }
  printf("\n");
  // Bonus -> multiway decisions

  printf("Enter 1 for English\n");
  printf("Enter 2 for French\n");
  printf("Enter 1 for Arabic\n");
  printf("\n");
  printf("Input your preference: ");
  scanf("%d", &option);
  printf("\n");
  if (option == 1)
  {
    printf("hello!\n");
  }
  else if (option == 2)
  {
    printf("Salut!\n");
  }
  else if (option == 3)
  {
    printf("Marhaba Selam \n");
  }
  else
  {
    printf("This is not a valid option\n");
  }

  return 0;
}