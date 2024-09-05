/*Write a C program to read the value of an integer m and display the value of
m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include<stdio.h>
main()
{
	int m;
	
	//Input Number
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&m);
	
	printf("\n\n\tTaken Number is : %d",m);
	if(m > 0)
	{
		printf("\n\n\t1 Because number larger than 0");
		
	}
	else if(m == 0)
	{
		printf("\n\n\t0 Because number is 0 ");
		
	}
	else
	{
		printf("\n\n\t-1 Because number less than 0");
	}
}
