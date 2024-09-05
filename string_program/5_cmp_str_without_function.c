/*5. Write a program in C to compare two strings without using string library
functions.*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[30], str2[30];
	int i, equal=1;
	
	printf("\n\n\tEnter the Value of First String :");
	scanf("%s",&str1);
	printf("\n\n\tEnter the value of second String :");
	scanf("%s",&str2);
	
	for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
	{
		if(str1[i] != str2[i])
		{
			equal=0;
		    break;
		}
	}
	if(equal)
	    printf("\n\n\tTwo String are equal");
	else
	    printf("\n\n\tTwo String are not equal");
	
}

