//W A P to Convert days into months...
#include<stdio.h>
main()
{
	int day,n;
	float m;
	
	//Input Days
	printf("\n\n\tEnter the values in days form : ");
	scanf("%d",&day);
	
	//Output in Month
	printf("\n\n\t-------------Convert days into Month------------------");
	m=day/30;
	n=day%30;
	
	printf("\n\n\t%d Days = %.0f Month and %d Days",day,m,n);
	
}
