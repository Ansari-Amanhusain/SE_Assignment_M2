/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
	int spaces = 0, digits = 0, len;
    char str[100];
    int i, specialCount = 0;

    printf("\n\n\tEnter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (!isalnum(str[i]) && !isspace(str[i])) 
		{
            specialCount++;
            printf("\n\n\tSpecial character found: %c", str[i]);
        }
    }

    printf("\n\n\tTotal number of special characters: %d", specialCount);
    printf("\n\n\t----------------------------------------------------------");
    
    
    len = strlen(str);
    for (i = 0; i < len; i++) 
	{
        if (isspace(str[i])) 
		{
            spaces++;
        } 
		else if (isdigit(str[i])) 
		{
            digits++;
        }
    }
    printf("\n\n\tNumber of blank spaces: %d", spaces);
    printf("\n\n\tNumber of digits       : %d", digits);

}
