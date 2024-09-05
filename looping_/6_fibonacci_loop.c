//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
main()
{
	int a=0, b=1, c;
	int  n,i;
	printf("\n\n\tEnter the length of Fibonacci Series : ");
	scanf("%d",&n);
	
	printf("\n\n\t%d %d", a, b);
	i=2;
	while(i<=n)
	{
		c = a + b ;
		a = b;
		b = c;
		printf(" %d", c);
		i++;
	}
}
