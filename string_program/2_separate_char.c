//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
main()
{
	char str[30];
	int i;
	printf("\n\n\tEnter the string value :");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n\n\t %c",str[i]);
	}
}
