#include <stdio.h>

int main(void) 
{	
	// program tailored for a farmer
	// program tells the farmer how many dozen of eggs they produce per day
	// it's silly but hey learning is meant to be outrageous. Here it goes!
 
	int eggs;
	printf("the number of eggs for the day: ");
	scanf("%d", &eggs);

	float dozen = (float)eggs / 12;
	printf("You have %.2f dozen eggs\n", dozen);	
	return 0;
}
