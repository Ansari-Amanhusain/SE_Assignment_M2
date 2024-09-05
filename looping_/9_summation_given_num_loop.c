//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int num, rem, sum = 0;
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&num);
	while(num > 0)
	{
	    rem = num % 10 ;
		sum = sum + rem ;
		num = num / 10 ;
			
	} 
	printf("\n\n\tSumation of Number is = %d",sum);
}
