//Find the Character Is Vowel or Not
#include<stdio.h>
main()
{
    char c;
	//input Character
	printf("\n\n\tEnter any Character : ");
	scanf("%c",&c);
	
	//check
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
	      printf("\n\n\tCharacter is Vowel");	
	}
	else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
	      printf("\n\n\tCharacter is Vowel");	
	}
	else
	{
	      printf("\n\n\tCharacter is Consonant");	
	}	
}
