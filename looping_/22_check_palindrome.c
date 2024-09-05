/*Accept 3 numbers from user using while loop and check each numbers
palindrome
*/
#include <stdio.h>

main() 
{      
    int num, number, reverse_num, remainder,i;

    printf("\n\n\tEnter 3 numbers to check for palindrome:\n");
    i = 1;
    while (i <= 3) 
	{
        printf("\n\n\tEnter number %d: ", i);
        scanf("%d", &num);

        
        number = num;
        reverse_num = 0;

        while (num != 0) {
            remainder = num % 10;
            reverse_num = reverse_num * 10 + remainder;
            num /= 10;
        }

        //Check weather the number is palindrime or not....
        if (number == reverse_num) 
		{
            printf("\n\n\t%d is a palindrome.\n", number);
        } 
		else 
		{
            printf("\n\n\t%d is not a palindrome.\n", number);
        }

        i++; 
    }

}

