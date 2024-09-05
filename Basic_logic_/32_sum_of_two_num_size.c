//W A P to Accept 2 numbers and find out its sum check it size...
#include<stdio.h>
main()
{
	int a,b,sum;
	printf("\n\n\tEnter any Two Numbers : ");
	scanf("%d %d",&a,&b);
	
	//sum of two number
	sum = a + b ;
	printf("\n\n\t%d + %d = %d",a,b,sum);
	printf("\n\n\tSize of the Sum : %d Bytes",sizeof(sum));
}
