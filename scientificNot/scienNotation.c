#include <stdio.h>
int main(void) 
{	
	double dogs;
	printf("Input how many dogs you seen on your jog today?");
	scanf("%lf", &dogs);
	
	printf("%f\n%e\n%g\n", dogs, dogs, dogs); // conversion characters decimal notation, scientific notation, computer decides....let see what happens
	
	return 0;
}
