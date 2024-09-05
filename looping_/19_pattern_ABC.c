//Patterns:
#include<stdio.h>
main()
{
	int r,c,temp='A';
	
	r=1;
	while(r<=5)
	{
		c=1;
		
		while(c<=r)
		{
			printf("%c ", temp);
			temp++;
			c++;
		}
		printf("\n");
		r++;
	}
}
