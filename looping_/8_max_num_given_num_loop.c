/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
*/
#include<stdio.h>
main()
{
	int num, reminder , max;
	//input number 
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&num);
	while(num > 0)
	{
		reminder = num % 10 ;
		if( reminder > max )
		{
			max = reminder;
		}
		num= num / 10 ;
		
	}
	printf("\n\tMaximum Number = %d",max);
}
