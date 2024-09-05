//WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>

main() 
{
    char str1[30], str2[30];
    int i, len;
    
    printf("\n\n\t------------------------To Check if the String is a Palindrome or not-----------------------");
    printf("\n\n\tEnter the String Value: "); // Input Value
    scanf("%s", str1);

    len = strlen(str1);
    for(i = len-1;i>=0; i--) 
	{
        str2[len-i-1] = str1[i];
    }
    printf("\n\n\tReversed String: %s", str2);

    if (strcmp(str1, str2) == 0) 
	{
        printf("\n\n\t%s is a palindrome.", str1);
    } else 
	{
        printf("\n\n\t%s is not a palindrome.", str1);
    }
}

