//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>

main()
{
	char str1[30], str2[30];
	int i, len;
	
	printf("\n\n\tEnter the Value of String : ");
	gets(str1);
	
	len=strlen(str1);
	
	for(i=0;i<len;i++)
	{
		str2[i] = str1[i];
	}
	
	printf("\n\n\tCopied String :-  %s",str2);
}
