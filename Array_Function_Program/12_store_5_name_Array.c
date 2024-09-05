//WAP to accept 5 Name and store it in array
#include<stdio.h>
main()
{
	char name[5][30], i;
	printf("\n\n\t-------------Enter 5 Name--------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tEnter Name[%d] : ",i+1);
		scanf(" %s",name[i]);
    }
    
    printf("\n\n\t-------------Display 5 Name--------------------");
    for(i=0;i<5;i++)
    {
    	printf("\n\n\tName[%d] = %s",i+1, name[i]);
	}
}
