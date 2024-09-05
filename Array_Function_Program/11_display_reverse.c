//WAP to accept 5 number from user and Display in Reverse.
#include<stdio.h>
main()
{
    int number[5], i;
	printf("\n\n\t-------------Enter Five Number---------------");	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tEnter num[%d] : ",i+1);
		scanf(" %d",&number[i]);
	}
	
	printf("\n\n\t-----------Display 5 Number in Reverse Form-----------");
	for(i=4;i>=0;i--)
	{
		printf("\n\n\t num[%d] : %d",i+1, number[i]);
	}
}
