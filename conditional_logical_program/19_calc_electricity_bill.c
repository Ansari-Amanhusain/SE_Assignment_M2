/*. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
Unit Charge/unit
upto 350 @1.20
350 and above but less than 600 @1.50
600 and above but less than 800 @1.80
800 and above @2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
the minimum bill should be of Rs. 256/-*/
#include<stdio.h>
main()
{
	int id,unit;
	char name[30];
	float total_amt,surcharge = 0,total_amount;
	printf("\n\n\tEnter the Customer ID : ");
	scanf("%d",&id);
	printf("\n\n\tEnter the Customer's name :");
	scanf("%s",&name);
	printf("\n\n\tEnter the unit that customer Purchase :");
	scanf("%d",&unit);
	
	//calculate total_amount
	if(unit <= 350)
	{
		total_amt=unit * 1.20 ;
	}
	else if(unit > 350 && unit <= 600)
	{
		total_amt=unit * 1.50 ;
	}
	else if(unit > 600 && unit <= 800)
	{
		total_amt=unit * 1.80 ;
	}
	else
	{
		total_amt=unit * 2.00 ;
	}
	
	if(total_amt > 800)
	{
	    surcharge = total_amt * 0.18;
	    total_amount = total_amt + surcharge;	
	}
	else if(total_amt < 256)
	{
		total_amount = 256;
	}
	else
	{
		total_amount = total_amt;
	}
	printf("\n\n\t-----------------Customer's Details------------------");
	printf("\n\n\tName of the customer                              :%s",name);
	printf("\n\n\tCustomer's ID                                     :%d",id);
	printf("\n\n\tCustomer's Units                                  :%d",unit);
	printf("\n\n\tTotal Amount of Customer's unit                   :%.2f",total_amount);
}
