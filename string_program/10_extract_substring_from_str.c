//10.Write a program in C to extract a substring from a given string
#include<stdio.h>
#include<string.h>

main()
{
	char str1[50];
	int i, end, start, len;
	
	printf("\n\n\tEnter the Value of String : ");
	gets(str1);
	
	printf("\n\n\t------------------------------------------------------");
	printf("\n\n\tEnter the starting index point : ");
	scanf("%d",&start);
	printf("\n\n\tEnter the end index point : ");
	scanf("%d",&end);
	
	len=strlen(str1);
	
	printf("\n\n\t");
	if(start > 0 && end > 0 && start + end <= len &&  start <= end)
	{
	    for(i=start;i<=end;i++)
	    {
		    printf("%c",str1[i]);
	    }
	}
	else
	{
		printf("You enter invalid Starting or Ending index.");
	}
	
}
