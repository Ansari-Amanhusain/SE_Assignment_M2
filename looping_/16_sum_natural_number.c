//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n, i, sum=0;
	
	printf("\n\n\t---------------Sum of Natural Numbers--------------------");
	printf("\n\n\tEnter the Natural number : ");
	scanf("%d",&n);
	if(n > 0)
	{
	    i=1;
	    while(i<=n)
	    {
		    sum = sum + i;
	        i++;
	    }
	}
	else
	{
		printf("\n\n\tPlease enter Natural Number...");
	}
	printf("\n\n\tSum of 1 to %d is = %d", n, sum);
	
}
