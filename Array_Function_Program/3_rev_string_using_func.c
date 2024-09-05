// WAP to find reverse of string using recursion

#include<stdio.h>
void reverse_String(char str[], int start, int end) 
{
	if (start >= end)
	{
		return; 
	}
	
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
	
	reverse_String(str, start + 1 , end - 1);
}

main()
{
	char str[100];
	
	// input the string
	printf("Enter a String : ");
	gets(str);
	
	int len = strlen(str);
	
	reverse_String(str, 0,len - 1);
	
	printf("Reverse String: %s\n", str);
	
}
