//WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,i,fact=1;
	printf("\n\n\t---------------Factorial of Given Number--------------------");
	//Input Number
	printf("\n\n\tEnter any Number : ");
	scanf(" %d", &n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\n\n\tFactorial of %d is : %d",n,fact);
	
}
