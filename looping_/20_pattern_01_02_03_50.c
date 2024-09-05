//WAP program to print below output using for loop 01 02 03 04 05 06 07 08 09 10
#include<stdio.h>
main()
{
	int r, c;
	r=0;
	printf("\n\n\t");
	while(r<=4)
	{
		c=1;
		while(c<=10)
		{
			if(c>9)
			{
				printf("%d0", r+1);
			}
			else
			{
				printf("%d%d ", r, c);
			}
			c++;
		}
		printf("\n\n\t");
		r++;
	}
}
