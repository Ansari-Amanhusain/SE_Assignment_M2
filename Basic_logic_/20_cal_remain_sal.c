/*W A P .Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/
#include<stdio.h>
main()
{
	int salary;
	int insurance,loan_installment;
	printf("\n\n\t-----------------Person's Salary-------------------------");
	printf("\n\n\tEnter the salary of the Person : ");
	scanf("%d",&salary);
	
	insurance=salary*0.1;
	loan_installment=salary*0.1;
	
	printf("\n\n\t-------------Remaining salary------------------");
	printf("\n\n\tInsurance premium of the person as per the rate of interest is : %d",insurance);
	printf("\n\n\tInstallment of the loan as per the rule is : %d",loan_installment);
	printf("\n\n\tRemaing salary of the person is : %d",salary-insurance-loan_installment);
	
}

