/*
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/
#include<stdio.h>
struct Employee
{
	int empno;
	char empname[30];
	char address[100];
	int age;
}e[5];

main()
{
	int i;
	
	printf("\n\n\t--------------Enter 5 Employee Details------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t-----------Employee %d----------------",i+1);
		printf("\n\n\tEnter the employee's No. : ");
		scanf(" %d", &e[i].empno);
		printf("\n\n\tEnter the employee's Name : ");
		scanf(" %s", &e[i].empname);
		printf("\n\n\tEnter the employee's Address : ");
		scanf(" %s", &e[i].address);
		printf("\n\n\tEnter the employee's Age : ");
		scanf(" %d", &e[i].age);
	}
	
	printf("\n\n\t--------------Display 5 Employee Details----------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t-----------------------------------------------------");
		printf("\n\n\tEnter the employee's No.        : %d",e[i].empno);
		printf("\n\n\tEnter the employee's Name       : %s",e[i].empname);
		printf("\n\n\tEnter the employee's Address    : %s",e[i].address);
		printf("\n\n\tEnter the employee's Age        : %d",e[i].age);
	}
}
