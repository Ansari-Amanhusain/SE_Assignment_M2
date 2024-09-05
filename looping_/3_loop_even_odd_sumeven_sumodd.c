/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
main()
{
	int num[10],evencount=0,oddcount=0,sumeven=0,sumodd=0;
	int i;
	//input Number
	printf("\n\n\tEnter 10 Number");
	for(i=1;i<=10;i++)
	{
		printf("\n\n\tNumber %d = ",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(num[i] % 2 == 0)
		{
			evencount++;
			sumeven = sumeven + num[i];
			
		}
		else
		{
			oddcount++;
			sumodd =sumodd + num[i];
		}
	}
	printf("\n\n\t----------------Whole Details-----------------");
	printf("\n\n\tTotal Even Number is             : %d",evencount);
	printf("\n\n\tTotal Odd Number is              : %d",oddcount);
	printf("\n\n\tTotal Sum of Even Number is      : %d",sumeven);
	printf("\n\n\tTotal Sum of Odd Number is       : %d",sumodd);
}
