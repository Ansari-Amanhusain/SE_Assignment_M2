/*11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice vers*/
#include<stdio.h>
#include<string.h>

main()
{
	char str1[50];
	int i, len;
	
	printf("\n\n\t------------------------------------------------------------------");
	printf("\n\n\tTake a sentence from the user and replace lowercase characters with");
    printf("\n\n\tuppercase and vice vers");
    printf("\n\n\t------------------------------------------------------------------");
	
	printf("\n\n\tEnter the Value of String : ");
	gets(str1);
	
	len=strlen(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(islower(str1[i]))
		{
			str1[i] = toupper(str1[i]);
		}
		else if(isupper(str1[i]))
		{
			str1[i] = tolower(str1[i]);
		}
	}
	
	printf("\n\n\tNow the Sentance is %s",str1);
}
