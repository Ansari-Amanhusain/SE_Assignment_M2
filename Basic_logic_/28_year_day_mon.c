//W A P to Convert years into days and months...
#include<stdio.h>
main()
{
	int y,d,m;
	
	//input years..
	printf("\n\n\tEnter the years : ");
	scanf("%d",&y);
	
	//output 
	m= y * 12 ;
	d= y * 365 ;
	
	printf("\n\n\t--------------Years to Month-------------------");
	printf("\n\n\t%d Years = %d Months",y,m);
	
	printf("\n\n\t--------------Years to Days--------------------");
	printf("\n\n\t%d Years = %d Days",y,d);
	
	
	
}
