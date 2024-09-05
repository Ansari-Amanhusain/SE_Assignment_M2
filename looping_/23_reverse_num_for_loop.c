//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

main() 
{
    int n, temp, digits, reminder, i;

    printf("\n\n\tEnter any Positive Number: ");
    scanf("%d", &n);

    if (n >= 0) 
	{
        temp = n;
        digits = 0;
        while (temp > 0) 
		{
            temp = temp / 10;
            digits++;
        }
        
        printf("\n\n\tDigits in reverse order are: ");
        
        for (i = 0; i < digits; i++) 
		{
            reminder = n % 10; 
            printf("%d", reminder); // Print the last digit
            n = n / 10; // Remove the last digit from the number
        }
        printf("\n");
    } 
	else 
	{
        printf("\n\n\tPlease enter a valid number.\n");
    }

   
}

