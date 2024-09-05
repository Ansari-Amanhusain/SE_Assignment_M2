/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/
#include<stdio.h>
main()
{
	int m;
	printf("\n\n\t--------------Calculate Days in Month---------------");
	
	//input month number
	printf("\n\n\tEnter the Month Number : ");
	scanf("%d",&m);
	
	//find days 
	if(m == 1)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 2)
	{
		printf("\n\n\t28th Days or 29th Days");
	}
	else if(m == 3)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 4)
	{
		printf("\n\n\t30th Days");
	}
	else if(m == 5)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 6)
	{
		printf("\n\n\t30th Days");
	}
	else if(m == 7)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 8)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 9)
	{
		printf("\n\n\t30th Days");
	}
	else if(m == 10)
	{
		printf("\n\n\t31st Days");
	}
	else if(m == 11)
	{
		printf("\n\n\t30th Days");
	}
	else if(m == 12)
	{
		printf("\n\n\t31st Days");
	}
	else
	{
		printf("\n\n\tEnter Valid Month Number !");
	}
}
