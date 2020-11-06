#include <stdio.h>

//Focus of today -> structured programming
//I made a program that has multiple statement (selection construct...)   

int main()
{
    int a;
    
    printf("input your value: ");
    scanf("%d", &a);
    printf("\n");
    
    if(a<0)
    {
        printf("a is negative\n");
    }
    else if(a>0)
    {
        printf("a is positive\n");
    }
    else
    {
        printf("a is zero\n");
    }
    return 0;
}
