//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
main()
{
	char str[30];
	int i, len;
	
	printf("\n\n\tEnter the string value :");
	scanf("%s",&str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("\n\n\t %c",str[i]);
	}

}
