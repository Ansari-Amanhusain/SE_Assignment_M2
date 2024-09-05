// WAP to find factorial using recursion
#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        return 1; 
    } else 
	{
        return n * factorial(n - 1); 
    }
}

main() 
{
    int num;
    
    // Input the number
    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    
    // Output the result
    printf("\n\n\tFactorial of %d is %d\n", num, result);
}

