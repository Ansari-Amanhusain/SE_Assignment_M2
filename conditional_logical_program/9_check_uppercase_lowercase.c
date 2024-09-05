/*C Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include<stdio.h>
main()
{
	char ch;
	//input character
	printf("\n\n\tEnter any character : ");
	scanf(" %c",&ch);
	//Check Condition
	if(ch >='A' && ch <='Z')
	{
		printf("\n\n\tIt is Uppercase");
	}
	else if(ch >='a' && ch <= 'z')
	{
		printf("\n\n\tIt is lowercase");
		
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("\n\n\tIt is Digit");
	}
	else
	{
		printf("\n\n\tIt is Special Character");
	}
	
}
