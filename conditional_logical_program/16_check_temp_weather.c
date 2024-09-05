/*Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
main()
{
	int temp;
	printf("\n\n\tEnter the Temperature in Centigrade : ");
	scanf("%d",&temp);
	
	//check
	if(temp == 0)
	{
		printf("\n\n\t%d Temp means Freezing Weather",temp);
	}
	else if(temp > 0 && temp <= 10)
	{
		printf("\n\n\t%d Temp means very cold  Weather",temp);
	}
	else if(temp > 10 && temp <= 20)
	{
		printf("\n\n\t%d Temp means cold Weather",temp);
	}
	else if(temp > 20 && temp <=30)
	{
		printf("\n\n\t%d Temp means Normal Weather",temp);
	}
	else if(temp > 30 && temp <= 40)
	{
		printf("\n\n\t%d Temp means Hot Weather",temp);
	}
	else
	{
		printf("\n\n\t%d Temp means very Hot Weather",temp);
	}
}
