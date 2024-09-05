//WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\tEnter any three Number : ");
	scanf("%d %d %d",&a,&b,&c);
	
	//check
	printf("\n\n\tThe maximum number is %d", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}
