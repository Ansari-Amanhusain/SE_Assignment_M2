/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/

#include<stdio.h>
main()
{
	int salary;
	float hra,da,gross_salary;
	
	printf("\n\n\t------------------Find Gross Salary------------------");
	//Input basic salary
	printf("\n\n\tEnter the Basic Salary : ");
	scanf("%d",&salary);
	
	//find hra and da
	if(salary <= 10000)
	{
		hra = salary * 0.20 ;
		da = salary * 0.80 ;
	}
	else if(salary > 10000 && salary <= 20000)
	{
		hra = salary * 0.25 ;
		da = salary * 0.90 ;
	}
	else
	{
		hra = salary * 0.30 ;
		da = salary * 0.95 ;
	}
	
	gross_salary = salary + hra + da ;
	
	printf("\n");
	printf("\n\n\tBasic Salary   : %d",salary);
	printf("\n\n\tHRA            : %.2f",hra);
	printf("\n\n\tDA             : %.2f",da);
	printf("\n\n\tGross Salary   : %.2f",gross_salary);
}
