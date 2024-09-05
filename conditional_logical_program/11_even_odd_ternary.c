//WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int n;
	printf("\n\n\tEnter any one Number : ");
	scanf("%d",&n);
	
	//check
	n % 2 == 0 ? printf("\n\n\tNumber is Even"):printf("\n\n\tNumber is Odd");
}
