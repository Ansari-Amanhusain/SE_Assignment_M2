// WAP Find out length of string without using inbuilt function
#include <stdio.h>
main() 
{
    char str[100];
    int length = 0;

    printf("\n\n\tFind out length of string without using inbuilt function...");
    printf("\n\n\t-----------------------------------------------------------");
    // Input the string from user
    printf("\n\n\tEnter a string: ");
    gets(str);
    while (str[length] != '\0') 
	{
        length++;
    }
    if (str[length - 1] == '\n') 
	{
        length--;
    }

    // Output the length of the string
    printf("\n\n\tLength of the string is: %d\n", length);
    
}

