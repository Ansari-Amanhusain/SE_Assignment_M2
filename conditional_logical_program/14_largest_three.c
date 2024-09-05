//WAP to find the largest of three numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\tEnter any three Number : ");
	scanf("%d %d %d",&a,&b,&c);
	
	//check
	if(a > b)
	{
		if(a > c)
		{
			printf("\n\n\t%d Number is Largest",a);
		}
		else
		{
			printf("\n\n\t%d Number is Largest",c);
		}
	}
	else if(b > a)
	{
		if(b > c)
		{
			printf("\n\n\t%d Number is Largest",b);
		}
		else
		{
			printf("\n\n\t%d Number is Largest",c);
		}
	}
}
