//cool example professor mentioned regarding the use of flags
// flags allow us to ensure one exit point for our loops

#include <stdio.h>

int main(void)
{   
    int n, sum = 0, keepReading =1;
    
    do 
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        keepReading = n != 0;
        sum += n;
    } while(keepReading);
    
    printf("Sum = %d \n", sum);

    return 0;
}
