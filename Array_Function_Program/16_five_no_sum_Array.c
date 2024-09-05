//WAP to accept 5 Number from User and performed sum of array
#include<stdio.h>
main()
{
	int num[5], i, sum=0;

    printf("\n\n\tEnter Any 5 Numbers----------------------");
    
    for(i = 0; i < 5; i++)
    {
        printf("\n\n\tEnter number[%d] : ", i + 1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 5; i++)
    {
    	sum += num[i];
	}
	printf("\n\n\tSum of Five Number is : %d",sum);
}
