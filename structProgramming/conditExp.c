#include <stdio.h>

// This program simply demonstrates conditional expression

int main()
{
    int a = 12, limit;
    
    limit = (a > 10) ? (500*a) : (a);
    
    printf("%d", limit);

    return 0;
}
