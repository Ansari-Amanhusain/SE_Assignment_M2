/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
main()
{
	int math,phy,chem,total,tmp;
	printf("\n\n\tEnter the Marks of Maths , Physics and Chemistry : ");
	scanf("%d %d %d",&math,&phy,&chem);
	
	//check Criteria
	total = math + phy + chem ;
	tmp = math + phy ;
	if(math >= 65 && phy >= 55 && chem >= 50)
	{
		if(total >= 190 && tmp >= 140)
		{
			printf("\n\n\tThe Candidate is Eligible");
		}
		else
		{
			printf("\n\n\tThe Candidate is not Eligible");
		}
	}
	else
	{
		printf("\n\n\tThe Candidate Marks is not valid as per the Criteria. So, it was not Eligible");
	}
	
	
}  
