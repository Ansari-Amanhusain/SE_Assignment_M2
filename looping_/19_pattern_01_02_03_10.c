#include<stdio.h>
main()
{
	int r,c;
	
	for(r=0;r<=9;r++)
	{
		if(r=0)
		{
		
		    for(c=1;c<=10;c++)
		    {
			    if(c<10)
			    {
				    printf("%d%d ", r, c);
			    }
			    else
			    {
			    	printf("%d0 ", r);
				}
		    }
		}
	}
}
