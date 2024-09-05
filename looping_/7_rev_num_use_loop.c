/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/
#include<stdio.h>
main()
{
	int num, reminder;
	printf("\n\n\tEnter Any Number : ");
	scanf("%d",&num);
	printf("\n\tReverse Number : ");
	while(num > 0)
	{
		reminder = num % 10;
		printf("%d",reminder);
		num = num / 10 ;
		
	}
}
