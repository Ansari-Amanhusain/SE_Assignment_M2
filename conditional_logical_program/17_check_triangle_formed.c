/*Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
main()
{
	int a1,a2,a3,total;
	printf("\n\n\t----------Check whether a triangle can formed or not--------------");
	printf("\n\n\tEnter the first angle of triangle : ");
	scanf("%d",&a1);
	printf("\n\n\tEnter the Second angle of triangle : ");
	scanf("%d",&a2);
	printf("\n\n\tEnter the Third angle of triangle : ");
	scanf("%d",&a3);
	
	total=a1 + a2 + a3;
	printf("\n\n\tAngle of Triangle %d , %d and %d",a1,a2,a3);
	if(total == 180)
	{
		printf("\n\n\tAs per the Given Angle, We can say that Triangle is Form");
	}
	else
	{
		printf("\n\n\tTriangle is not Form. As per the Given Angle");
	}
}
