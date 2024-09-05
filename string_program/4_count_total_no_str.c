//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
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
	printf("\n\n\tTotal words are persent in string is : %d", count);

}
