/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
main()
{
	int a,b,ch;
	
	//input two number
	printf("\n\n\tEnter any two number : ");
	scanf("%d %d",&a,&b);
	
	printf("\n\n\t-----------Menu-------------");
	printf("\n\n\tPress 1 for Addition");
	printf("\n\n\tPress 2 for Subtraction");
	printf("\n\n\tPress 3 for Multiple");
	printf("\n\n\tPress 4 for Division");
	printf("\n");
	printf("\n\n\tSelect any one option : ");//select option
	scanf("%d",&ch);
	if(ch == 1)
	{
		printf("\n\n\t%d + %d = %d",a,b,a+b);
	}
	else if(ch == 2)
	{
		printf("\n\n\t%d - %d = %d",a,b,a-b);
	}
	else if(ch == 3)
	{
		printf("\n\n\t%d * %d = %d",a,b,a*b);
	}	
	else if(ch == 4)
	{
		if(b != 0)
		{
		    printf("\n\n\t%d / %d = %d",a,b,a/b);
	    }
	    else
	    {
	    	printf("\n\n\tDivision is Invalid");
		}
	}
	else
	{
		printf("\n\n\tPlease Select Correct Option...");
	}
}

