#include <stdio.h>

//this application demonstrates how a simple for loop works
// a for loop consists of (initialization; condition; update)

int main(void)
{
    for (int n = 4; n > 0; n--)
    {
        printf("%d\n", n);
    }
    printf("Blastoff!!\n");
    return 0;
}
