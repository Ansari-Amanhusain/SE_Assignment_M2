/*
WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/
#include<stdio.h>
main()
{
	int ch, a, b;
	char c;
	do
	{
		
		printf("\n\n\tEnter the First Value : ");
	    scanf(" %d",&a);
	    printf("\n\n\tEnter the Second Value : ");
	    scanf(" %d",&b);
		
		printf("\n\n\t1.Addition");
		printf("\n\n\t2.Substraction");
		printf("\n\n\t3.Multiplication");
		printf("\n\n\t4.Division");
		printf("\n\n\tSelect the Choice : ");
		scanf(" %d",&ch);
		
		switch(ch)
		{
			case 1: printf("\n\n\tAddition of %d and %d is = %d", a, b, a+b);
			        break;
			case 2: printf("\n\n\tSubtraction of %d and %d is = %d", a, b, a-b);
			        break;
			case 3: printf("\n\n\tMultiplication of %d and %d is = %d", a, b, a*b);
			        break;
			case 4: 
			       if(b > 0)
			       {
			            printf("\n\n\tDivision of %d and %d is = %d", a, b, a/b);
			       }
			       else
			       {
			       	    printf("\n\n\tInvalid");
				   }
			        break;
			default : printf("\n\n\tPlease select the Correct Option.....");
			          break;
		}
		printf("\n\n\tDo you Want to continue (press y or n) :");
		scanf(" %c",&c);
	}while(c=='y');
}
