/*WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/
#include<stdio.h>
main()
{
	printf("\n\n\t-----------(i)Monday to Sunday using switch case-------------");
	int ch;
	printf("\n\n\t-------Menu---------");
	printf("\n\n\tPress 1 for 1st day");
	printf("\n\n\tPress 2 for 2nd day");
	printf("\n\n\tPress 3 for 3rd day");
	printf("\n\n\tPress 4 for 4th day");
	printf("\n\n\tPress 5 for 5th day");
	printf("\n\n\tPress 6 for 6th day");
	printf("\n\n\tPress 7 for 7th day");
	
	printf("\n");
	printf("\n\n\tSelect the choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n\n\tMonday");
		       break;
		case 2:printf("\n\n\tTuesday");
		       break;
		case 3:printf("\n\n\tWednesday");
		       break;
		case 4:printf("\n\n\tThursday");
		       break;
		case 5:printf("\n\n\tFriday");
		       break;
		case 6:printf("\n\n\tSaturday");
		       break;
		case 7:printf("\n\n\tSunday");
		       break;
		default:printf("\n\n\tPlease enter Valid Option");
		       break;
		       
	}
	printf("\n\n\t-------------(ii)Vowel or Consonant using switch case----------------");
	char c;
	//Input character
	printf("\n\n\tEnter any Character : ");
	scanf(" %c",&c);
	switch(c)
	{
		case 'a':printf("\n\n\tVowel");
		       break;
		case 'e':printf("\n\n\tVowel");
		       break;
		case 'i':printf("\n\n\tVowel");
		       break;
		case 'o':printf("\n\n\tVowel");
		       break;
		case 'u':printf("\n\n\tVowel");
		       break;
		case 'A':printf("\n\n\tVowel");
		       break;
		case 'E':printf("\n\n\tVowel");
		       break;
		case 'I':printf("\n\n\tVowel");
		       break;
		case 'O':printf("\n\n\tVowel");
		       break;
		case 'U':printf("\n\n\tVowel");
		       break;
		default:printf("\n\n\tConsonant");
		        break;
		
		     
	}
	
	
}
