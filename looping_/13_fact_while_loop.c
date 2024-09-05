//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("\n\n\tEnter any Number : ");
	scanf("%d", &n);
	i=n;
	while(i > 0)
	{
		fact= fact * i;
		i--;
	}
	printf("\n\n\tFactorial of %d is = %d", n, fact);
}
