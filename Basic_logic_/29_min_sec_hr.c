//W A P to Convert minutes into seconds and hours...
#include<stdio.h>
main()
{
	int min,sec,m;
	float hr;
	
	printf("\n\n\t---------------------Convert Minutes into Second and Hours----------------------------");
	//Input Minutes
	printf("\n\n\tEnter values in Minutes : ");
	scanf("%d",&min);
	
	//Formula
	sec = min * 60;
	hr = min / 60;
	m=min % 60 ;
	
	//Output
	printf("\n\n\t %d Minutes = %d Second",min,sec);
	printf("\n\n\t %d Minutes = %.0f Hours %d Minutes",min,hr,m);
	
	
}
