/*Write a program in C to count the total number of vowels or consonants in a
string.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>//function include like isalpha, isdigit, tolower, toupper, isalnum, etc.

main()
{
	char str1[30];
	int i, len, vowel=0, consonant=0;//to count 
	
	printf("\n\n\tEnter the Value of String : ");
	gets(str1);//input string
	
	len=strlen(str1);//length of str1
	
	for(i=0;i<len;i++)
	{
		//to find no. of vowel and consonant
		if(tolower(str1[i])=='a' || tolower(str1[i])=='e' || tolower(str1[i])=='i' || tolower(str1[i])=='o' || tolower(str1[i])=='u')
		{
			vowel++;
		}
		else if(isalpha(str1[i]))
		{
			consonant++;
		}
	}
	
	printf("\n\n\t---------------------------------------------------------------------");
	printf("\n\n\tUser Enter the String is       : %s",str1);
	printf("\n\n\tTotal No. of Vowel is          : %d",vowel);
	printf("\n\n\tTotal No. of consonant is      : %d",consonant);
}
