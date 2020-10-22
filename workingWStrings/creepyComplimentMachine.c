#include <stdio.h>

int main(void) 
{	char userName[31];
	printf("Hey, what's your name?");
	scanf("%s", userName);
	printf("\n");
	printf("Computer - Hello %s! Thanks for making this program!\n", userName);
	return 0;
}
