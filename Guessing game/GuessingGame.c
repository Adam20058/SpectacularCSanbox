#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
/* guessing game:
The rules --> the user has to guess a number form 0 - 50
.....
output will tell user whether they are right or not
*/
int main(void)
{   
//Generate a random number... pseudo random number
// number gets seeded... pseudo random number generator... outputs a results
// seeds is generated from the clock
    int maxValue = 50;
    int input;
    
    srand(time(NULL));
    int randomNumber = rand() % maxValue+1; // allows for a remainder from 0 to 5
    
    //printf("%d\n", randomNumber);
    
    // modulus operator %.... gives the remainder of a division
    
    printf("Guess a number between 0-%d: ", maxValue);
    scanf("%d", &input);
    
    if ( input == randomNumber) 
    {
        printf("You win\n");
    }
    else
    {
    printf("Sorry you lost! Try again\n");
    }
    return 0;
}
