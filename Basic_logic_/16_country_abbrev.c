//W A P to Convert country’s name in abbreviate form
#include<stdio.h>
main()
{
	char country[30]="United State of America";
	//print in abbreviate form..
	printf("\n\n\t----------Convert country's name in abbreviate form-------------");
	printf("\n\n\tName of the Country : %s",country);
	printf("\n\n\tAbbreviated Form of Country : %c.%c.%c",country[0],country[7],country[16]);
}
