/*Check Number Is Positive or Negative*/
#include<stdio.h>
main()
{
	int n;
	//input number
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&n);
	
	//check the number is positive or negative
	if(n > 0 )
	{
		printf("\n\n\t%d Number is Positive",n);
	}
	else if(n < 0)
	{
		printf("\n\n\t%d Number is Negative",n);
	}
	else
	{
		printf("\n\n\tNumber is Netural");
	}
}
