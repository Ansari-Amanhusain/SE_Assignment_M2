//W A P to Calculate person’s insurance premium based on salary..
#include<stdio.h>
main()
{
	int salary,Insurance;
	printf("\n\n\t--------------------------------------------");
	printf("\n\n\tEnter the Salary of the person :");
	scanf("%d",&salary);
	
	printf("\n\n\t--------------------------------------------");
	printf("\n\n\tSalary of the person : %d",salary);
	Insurance=salary*0.01;
	printf("\n\n\tPerson's Insurance premium based on their salary is : %d ",Insurance);
	printf("\n\n\tPerson's Insurance premium based on their Annual_salary is : %d ",Insurance*12);
	
}
