/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
main()
{
	int unit;
	float rs,total;
	//input unit
	printf("\n\n\tEnter Your Unit charges : ");
	scanf("%d",&unit);
	if(unit <= 50)
	{
		rs=unit*0.50;
		printf("\n\n\t%d units = %.2f Rupees",unit,rs);
	}
	else if(unit > 50 && unit <= 100 )
	{
		rs=unit*0.75;
		printf("\n\n\t%d units = %.2f Rupees",unit,rs);
	}
	else if(unit > 100 && unit <= 250 )
	{
		rs=unit*1.20;
		printf("\n\n\t%d units = %.2f Rupees",unit,rs);
	}
	else
	{
		rs=unit*1.50;
		printf("\n\n\t%d units = %.2f Rupees",unit,rs);
	}
	printf("\n\n\t Additional Surcharges of 20 Percentage ");
	total= rs * 0.2 ;
	printf("\n\n\t Total Rupees of Your Bill is : %.2f",total + rs);
}
