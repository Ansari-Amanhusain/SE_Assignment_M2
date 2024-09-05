//13.Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
	char str[50];
	int i, j=0, len;
	
	printf("\n\n\t-----------------------------------------------------------");
	printf("\n\n\tremove characters from a string except alphabets.");
	printf("\n\n\t-----------------------------------------------------------");
	
	printf("\n\n\tEnter the String  : ");
	gets(str);
	
	len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
	printf("\n\n\tString is : %s",str);
}
