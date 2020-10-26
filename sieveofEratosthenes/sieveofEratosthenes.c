#include <stdio.h>

int main(void) {
	//Program pays homage to the astronomer Eratosthenes of Cyrene on his contribution to number theory
	// The program simply finds out the number of primary numbers between the number inputted by the user 
	
	int num,i,j;
	printf("Enter the number\n");
	scanf("%d",&num);

	int primeN[num+1];

    //populating array with naturals numbers
	for(i = 2; i<=num; i++)
        primeN[i] = i;
	 i = 2;
	 while ((i*i) <= num)
   	 {
       		 if (primeN[i] != 0)
       		 {
           		 for(j=2; j<num; j++)
           			 {
               				 if (primeN[i]*j > num)
                   				 break;
               				 else
                   				 primeN[primeN[i]*j]=0;
           				 }
       				 }
       				 i++;
   	 }

   	 for(i = 2; i<=num; i++)
   	 {
        //If number is not 0 then it is prime
        if (primeN[i]!=0)
            printf("%d\n",primeN[i]);
   	 }

	return 0;
}

