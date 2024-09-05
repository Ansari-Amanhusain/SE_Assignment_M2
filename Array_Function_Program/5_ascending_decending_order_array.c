/*
WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/
#include<stdio.h>
main()
{
	int arr1[5], arr2[5];
	int i, j, temp;
	
	printf("\n\n\t-------------Ascending Order--------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tEnter the arr[%d] : ",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\n\n\t--------Array before Ascending order----------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tarray[%d] : %d",i+1, arr1[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		    if(arr1[i] > arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}	
		}
	}
	printf("\n\n\t--------Array In Ascending order----------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tarray[%d] : %d",i+1, arr1[i]);
	}
	
	
	
	
	printf("\n\n\t-------------Descending Order-------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tEnter the arr[%d] : ",i+1);
		scanf("%d",&arr2[i]);
	}
	printf("\n\n\t--------Array before Descending order----------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tarray[%d] : %d",i+1, arr2[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		    if(arr2[i] < arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}	
		}
	}
	printf("\n\n\t--------Array In Descending order----------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tarray[%d] : %d",i+1, arr2[i]);
	}
	
}
