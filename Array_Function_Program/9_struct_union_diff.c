//WAP to show difference between Structure and Union
#include<stdio.h>
struct Employee
{
	int eid;
	char ename[30];
	char ebranch[30];
	int salary;
}E;

union Employees
{
	int eid;
	char ename[30];
	char ebranch[30];
	int salary;
}e;

main()
{
	printf("\n\n\t-----------------------------------------------------------");
	printf("\n\n\t-------------Enter the Value in Structure------------------");
	printf("\n\n\tEnter the ID of Employee : ");
	scanf("%d",&E.eid);
	printf("\n\n\tEnter the Name of the Employee : ");
	scanf(" %s",&E.ename);
	printf("\n\n\tEnter the Branch of Employee : ");
	scanf(" %s",&E.ebranch);
	printf("\n\n\tEnter the Salary of Employee : ");
	scanf("%d",&E.salary);
	
	printf("\n\n\t----------------Display the Element of Structure------------------");
	printf("\n\n\tEmployee's ID              :  %d",E.eid);
	printf("\n\n\tEmployee's Name            :  %s",E.ename);
	printf("\n\n\tEmployee's Branch          :  %s",E.ebranch);
	printf("\n\n\tEmployee's Salary          :  %d",E.salary);
	
    printf("\n\n\t-----------------------------------------------------------");
    printf("\n\n\t-------------Enter the Value in Union-------------------------");
    printf("\n\n\tEnter the ID of Employee : ");
	scanf("%d",&e.eid);
	printf("\n\n\tEnter the Name of the Employee : ");
	scanf(" %s",&e.ename);
	printf("\n\n\tEnter the Branch of Employee : ");
	scanf(" %s",&e.ename);
	printf("\n\n\tEnter the Salary of Employee : ");
	scanf("%d",&e.salary);
	
	printf("\n\n\t----------------Display the Element of Structure------------------");
	printf("\n\n\tEmployee's ID              :  %d",e.eid);
	printf("\n\n\tEmployee's Name            :  %s",e.ename);
	printf("\n\n\tEmployee's Branch          :  %s",e.ebranch);
	printf("\n\n\tEmployee's Salary          :  %d",e.salary);
	
	printf("\n\n\t-----------------Differnce B/W Structure and Union--------------------");
	printf("\n\n\tYou can see the above that In Structure they provide different memory space to all members.");
	printf("\n\n\tBut in Union they provide single memory space i.e., they overlayers each other");
	printf("\n\n\tAnd the last member of Union provide accurate value only.");
    
}
