//W A P to find the Area of Triangle.
#include<stdio.h>
main()
{
	int b,h;
	float Area;
	printf("Enter the breath of the triangle");
	scanf("%d",&b);
	printf("\nEnter the height of the triangle");
	scanf("%d",&h);
	Area=0.5*b*h;
	printf("\nArea of Triangle is %.2f",Area);
}
