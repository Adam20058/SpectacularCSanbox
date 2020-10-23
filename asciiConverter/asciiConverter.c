#include <stdio.h>

int main() 
{
	printf("\n");
	printf("************************\n");
	printf("****ASCII Converter!****\n");
	printf("************************\n");
	printf("\n");	

	char ASCII;
	printf("Enter a character: ");	
	scanf("%c", &ASCII);	
	printf("\n");	
	printf("%d\n", ASCII);	
	printf("\n");	
	
	int numbers;
	printf("Enter a number between 0 - 127: ");
	scanf("%d", &numbers);		
	printf("\n");	
	printf("%c\n",numbers);
	printf("\n");	

	//doing math with ASCII

	char math = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", math, math);
		
	return 0;
}
