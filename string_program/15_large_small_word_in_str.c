//15. Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() 
{
    char str[1000], word[100], largest[100] = "", smallest[100] = "";
    int i, len, Length = 0;
    int max = 0, min = 100;

    printf("\n\n\tEnter the string : ");
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
            word[Length++] = str[i];
        } 
		else 
		{
            if (Length > 0) 
			{
                word[Length] = '\0'; 
                if (Length > max) 
				{
                    max = Length;
                    strcpy(largest, word);
                }
                if (Length < min) 
				{
                    min = Length;
                    strcpy(smallest, word);
                }
                Length = 0;
            }
        }
    }


    if (Length > 0) 
	{
        word[Length] = '\0';
        if (Length > max) 
		{
            max = Length;
            strcpy(largest, word);
        }
        if (Length < min) 
		{
            min = Length;
            strcpy(smallest, word);
        }
    }

    // Print results
    if (strlen(largest) > 0) 
	{
        printf("\n\n\tLargest word: %s\n", largest);
    } 
	else 
	{
        printf("\n\n\tNo words found.\n");
    }

    if (strlen(smallest) > 0) 
	{
        printf("\n\n\tSmallest word: %s\n", smallest);
    } 
	else 
	{
        printf("\n\n\tNo words found.\n");
    }

}

