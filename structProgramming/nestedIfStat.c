#include <stdio.h>

/* this is just a rehash of what the professor explained to us about nested if statements
 sometimes we want to place one if statement inside another -> nested if */
 
// this program is a good demonstration of nested if
// it tells the you whether your inputted value is a positive even number, postive odd number, negative number

int main(void)
{   int n, even;
    printf("An a numerical value: ");
    scanf("%d", &n);
    printf("\n");
    even = (n % 2) == 0;

    if (n > 0)
    {
        if (even) { printf("The inputted value is a postive even number\n");
        }        
        else {printf("The inputted value is a positive odd number\n");}
    } else {
        printf("The inputted value is a negative number");
    }
        
    return 0;
}
