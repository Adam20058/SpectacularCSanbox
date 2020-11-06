#include <stdio.h>

int main()
{   
    // Reviews selection constructs in structure programming
    // This program demonstrates if else statement/ alternative sequences
    // this program checks if I'm considered overweight or not
    // According to my doctor I'm 5'9, basing my inputted values according to NHS standards
    // Healthy weight range at my height is between 125 - 199
    const int oW = 170;
    const int uW = 124;

    int wt;
    
    printf("Input your weight: ");
    scanf("%d", &wt);
    printf("\n");
    
    if (wt >= oW)
    {
        printf("You're over the recommeneded healthy weight. Lets regroup and work on an improved dietary and workout plan \n");
    }
    else if (wt <= uW)
    {
        printf("You're under the recommended healthy weight. Lets regroup and work on an improved dietary and workout plan \n");
    }
    
    else {
        printf("You're at a healthy weight. Maitain your excercise and dietary plan!\n");
    }
    
    
    return 0;
}
