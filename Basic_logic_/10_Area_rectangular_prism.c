//W A P find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
main()
{
	int l,w,h,Area;
	printf("Enter the length of the rectanglar prism");
	scanf("%d",&l);
	printf("\nEnter the width of the rectanglar prism");
	scanf("%d",&w);
	printf("\nEnter the height of the rectanglar prism");
	scanf("%d",&h);
	Area=2*((w*l+(h*l+(h*w))));
	printf("\nArea of rectangular prism is %d",Area);
}
