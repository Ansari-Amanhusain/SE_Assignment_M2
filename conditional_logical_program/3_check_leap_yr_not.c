//WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int y;
	
	//input year
	printf("\n\n\tEnter the Year in the form of (XXXX) : ");
	scanf("%d",&y);
	
	printf("\n\n\t-----------Check the year is leap year or not-------------");
	//check
	if(y % 4 == 0 )
	{
		printf("\n\n\t%d Year is leap Year",y);
	}
	else
	{
		printf("\n\n\t%d Year is not leap Year",y);
	}
}
