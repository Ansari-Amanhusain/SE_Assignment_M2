//WAP to check whether a number is negative, positive or zero
#include<stdio.h>
main()
{
	int n;
	//input Number
	printf("\n\n\tEnter any one Number :");
	scanf("%d",&n);
	
	//check
	if(n > 0)
	{
		printf("\n\n\t%d Number is Positive",n);
	}
	else if( n == 0)
	{
		printf("\n\n\t%d Number is Zero/Netural",n);
	}
	else
	{
		printf("\n\n\t%d Number is Negative",n);
	}
}
