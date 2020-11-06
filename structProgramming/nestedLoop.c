
#include <stdio.h>

//this demonstrates a nested loop
int main(void)
{   
    int i, j;
    
    for (i = 0; i < 2 ; i++)
    {
        j = 2;
        while (j > 0) 
        {
            printf("%d %d\n", i, j); 
            j--;
        }
        
    }
    printf("Hello World");

    return 0;
}
