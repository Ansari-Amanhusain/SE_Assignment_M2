/*Write a program in C to find the length of a string without using library
functions.*/
#include<stdio.h>
#include<string.h>
main()
{
	char str[30];
	int i, count=0;
	printf("\n\n\tEnter the String Value  : ");
	scanf(" %s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\n\n\tlength is : %d", count);
}
