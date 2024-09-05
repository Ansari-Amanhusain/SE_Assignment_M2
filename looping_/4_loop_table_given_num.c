//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int n,i,ni;
	//Input Number
	printf("\n\n\tEnter any number : ");
	scanf("%d",&n);
	printf("\n\n\tEnter a number that goes Table up to : ");
	scanf("%d", &ni);
	printf("\n\n\t-------------------Table of %d ----------------------",n);
	
	
	for(i=1;i<=ni;i++)
	{
		printf("\n\t%d * %d = %d",n,i,n*i);
	}
}
