// WAP to perform Palindrome number using for loop and function

#include <stdio.h>
#include <stdbool.h>

// function to check if a number is a palindrome
bool Palindrome(int number) 
{
    int original = number;
    int reversed = 0;
    int remainder;

    while (number != 0) 
	{
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return original == reversed;
}

main() 
{
    int num;

    // Input the number
    printf("\n\ntEnter a number: ");
    scanf("%d", &num);

    if (Palindrome(num)) 
	{
        printf("\n\n\t%d is a palindrome.", num);
    } 
	else 
	{
        printf("\n\n\t%d is not a palindrome.", num);
    }

}

