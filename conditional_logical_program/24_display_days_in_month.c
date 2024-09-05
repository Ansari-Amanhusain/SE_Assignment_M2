/*Accept the input month number and print number of days in that
month*/
#include<stdio.h>
main()
{
	int y,m;
	printf("\n\n\tEnter the year in (XXXX) : ");
	scanf("%d",&y);
	printf("\n\n\tEnter the Month Number :");
	scanf("%d",&m);
	if(m==1)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==2)
	{
		if(y%4==0)
		{
			printf("\n\n\t29th Days");
		}
		else
		{
			printf("\n\n\t28th Days");
		}
	}
	else if(m==3)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==4)
	{
		printf("\n\n\t30th Days");
	}
	else if(m==5)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==6)
	{
		printf("\n\n\t30th Days");
	}
	else if(m==7)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==8)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==9)
	{
		printf("\n\n\t30th Days");
	}
	else if(m==10)
	{
		printf("\n\n\t31st Days");
	}
	else if(m==11)
	{
		printf("\n\n\t30th Days");
	}
	else if(m==12)
	{
		printf("\n\n\t31st Days");
	}
	else
	{
		printf("\n\n\nIn the Years their is have only 12 Months. So please enter Valid number");
	}
	
	
}
