//W A P to find the circumference of rectangle.....
#include<stdio.h>
main()
{
	int l,w;
	float c;
	printf("Enter the length of the rectangle");
	scanf("%d",&l);
	printf("\nEnter the width of rectangle");
	scanf("%d",&w);
	c=2*(l+w);
	printf("\nCircumference of rectangle is %.2f",c);
	
}
