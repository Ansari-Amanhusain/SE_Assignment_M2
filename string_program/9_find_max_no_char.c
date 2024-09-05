//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>

main()
{
	char str1[50], c;
	int i, count=0;
	
	printf("\n\n\t-----------------------------------------------------------------");
	printf("\n\n\tfind the maximum number of characters in a string.");
	printf("\n\n\t-----------------------------------------------------------------");
	printf("\n\n\tEnter the Value of String : ");
	gets(str1);
	printf("\n\n\tEnter the character you want to count. :");
	scanf(" %c",&c);
	
	
	for(i=0;str1[i]!='\0';i++)
	{
	    if(tolower(str1[i])== c)
		{
			count++;
	    }
	}
	
	printf("\n\n\t%c in %s is repeated %d times.", c, str1, count);
}
