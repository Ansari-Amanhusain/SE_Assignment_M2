//WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>

main() 
{
    int numbers[5]; 
    int i;

    //Input Number
    printf("\n\n\tEnter 5 numbers:\n");
    for (i = 1; i <= 5; i++) 
	{
        printf("\n\n\tNumber %d: ", i);
        scanf("%d", &numbers[i]);
    }

    
    printf("\n\n\tThe numbers you entered are:\n");
    for (i = 1; i <=5; i++) 
	{
        printf("\n\n\tNumber %d: %d\n", i , numbers[i]);
    }

}

