
#include <stdio.h>

int main()
{   
    /* Prof mentioned working on the mars rover
    Made me think why not make a countdown timer for a rocket
    */
    
    // This application demonstrates how a simple while loop works 
   int n = 15;
    
    printf("T minus %d seconds in counting\n", n);

    n = 14;
   while (n > 0)
   {
       printf("%d\n", n);
       n--;
   }
   printf("BLASTOFF!!!!!\n");
    return 0;
}
