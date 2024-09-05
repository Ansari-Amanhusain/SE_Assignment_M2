//WAP to input the week number and print week day...
#include<stdio.h>
main()
{
	int week_number;
	
	printf("\n\n\t---------------Week_number to print Week_day--------------");
	//input week number
	printf("\n\n\tEnter week number from 1 to 7 : ");
	scanf("%d",&week_number);
	
	printf("\n");
	switch(week_number)
	{
		case 1:printf("\n\n\tMonday");
		       break;
		case 2:printf("\n\n\tTuesday");
		       break;
		case 3:printf("\n\n\tWednesday");
		       break;
		case 4:printf("\n\n\tThursday");
		       break;
		case 5:printf("\n\n\tFriday");
		       break;
		case 6:printf("\n\n\tSaturday");
		       break;
		case 7:printf("\n\n\tSunday");
		       break;
		default:printf("\n\n\tInvalid Number!You selected");
		        break;
		
	}
}
