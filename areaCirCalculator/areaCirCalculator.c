#include <stdio.h>

int main(void) 
{
	//radius is the distance from outside to center of a circle	
	
	const double pi = 3.141592653589793238;
	double area;
	int radius;
	printf("please enter a radius: ");
	scanf("%i", &radius);

	area = pi * (radius * radius);
	printf("The area of a circle with %i radius is %.2lf\n", radius, area); 
	return 0;
}
