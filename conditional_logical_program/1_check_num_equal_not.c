/* Write a C program to accept two integers and check whether they are equal
or not */
#include<stdio.h>
main()
{
	int a , b ;
	//input two value
	printf("\n\n\tEnter any two Numbers : ");
	scanf("%d %d",&a, &b);
	
	//Check the number are equal or not
	if(a == b)
	{
		printf("\n\n\t%d and %d are equal",a,b);
		
	}
	else
	{
		printf("\n\n\t%d and %d are not equal",a,b);
	}
}

