//Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main()
{
	int n, i;
	printf("\n\n\tEnter the Table_Number : ");
	scanf("%d", &n);
	printf("\n\n\t---------------------Table of %d -------------------------",n);
	i=1;
	while(i<=10)
	{
		printf("\n\t%d * %d = %d",n,i,n*i);
		i++;
	}
}
