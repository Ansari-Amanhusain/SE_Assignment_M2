/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/
#include<stdio.h>
main()
{
	int num, last_num, first_num, sum = 0;
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&num);
	last_num = num % 10 ;
	first_num = num;
	
	while(first_num > 9)
	{
	     first_num= first_num / 10 ;	 
	} 
	sum = first_num + last_num;
	printf("\n\n\tSum of First and Last digit of %d is = %d", num, sum);
}
