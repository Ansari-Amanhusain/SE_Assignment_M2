//W A P to Accept 5 expense from user and find average of expense...
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5;
	float avg;
	printf("\n\n\tEnter first Expense : ");
	scanf("%d",&e1);
	printf("\n\n\tEnter second Expense : ");
	scanf("%d",&e2);
	printf("\n\n\tEnter third Expense : ");
	scanf("%d",&e3);
	printf("\n\n\tEnter fourth Expense : ");
	scanf("%d",&e4);
	printf("\n\n\tEnter fifth Expense : ");
	scanf("%d",&e5);
	printf("\n\n\t-------------------------------------------");
	avg=(e1+e2+e3+e4+e5)/5;
	printf("\n\n\tAverage of the Five Expense are : %.2f",avg);
	
}
