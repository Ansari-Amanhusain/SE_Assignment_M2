//14.Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>

main()
{
	char str1[30], str2[30], str[60];
	int i, j, len;
	
	printf("\n\n\tEnter the First String :");
	gets(str1);
	len = strlen(str1);
    if (len > 0 && str1[len - 1] == '\n') 
	{
        str1[len - 1] = '\0';
    }
	printf("\n\n\tEnter the Second String :");
	gets(str2);
	len = strlen(str2);
    if (len > 0 && str2[len - 1] == '\n') 
	{
        str2[len - 1] = '\0';
    }
	
	for (i = 0; str1[i] != '\0'; i++) 
	{
        str[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) 
	{
        str[i + j] = str2[j];
    }
	
	printf("\n\n\tConcatenated String: %s\n", str);
	
}
