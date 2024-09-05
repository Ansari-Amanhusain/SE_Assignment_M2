//W A P to C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int n,p,q,r;
	
	printf("\n\n\t------------Find First Three Power of Below Number...--------------");
	//Input Numbers
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&n);
	
	//first Three Power
	p=n * 1;
	q=n * n;
	r=n * n * n;
	printf("\n\t");
	printf("\n\n\tNumber %d Power : %d , %d , %d",n,p,q,r);
	
	
}
