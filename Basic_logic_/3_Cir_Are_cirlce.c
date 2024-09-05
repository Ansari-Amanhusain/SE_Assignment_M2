#include<stdio.h>
main()
{
	//W A P to find the Area of Circle and Circumference
	float r,circumference,Area;
	printf("enter the radius of circle");
	scanf("%f",&r);
	Area=3.14*r*r;
	printf("\nArea of circle is %f",Area);
	circumference=2*3.14*r;
	printf("\nCircumference of circle is %f",circumference);
}
