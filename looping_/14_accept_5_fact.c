//calculate the Factorial of a Given Number using while loop
#include <stdio.h>

main() 
{
    int n[5], fact, i, num;

    // Take input from user using while loop
    printf("\n\n\tEnter 5 numbers : ");
    
    i=1;
    while (i <= 5) 
	{
        printf("\n\n\tNumber %d: ", i);
        scanf("%d", &n[i]);
        i++;
    }
    
    printf("\n\n\t------------Factorial of 5 Number ------------------");
    i = 1;
    while (i <= 5) 
	{
        num = n[i];
        fact = 1;
        
        int j = num;
        while (j >= 1) 
		{
            fact =fact * j;
            j--;
        }

        printf("\n\n\t%d Number Factorial is = %d ", num, fact);
        printf("\n\n"),
        i++;
    }

}

