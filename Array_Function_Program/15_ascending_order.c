//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main()
{
	
	int arr[5], i, j, temp;
	
	printf("\n\n\tEnter 5 Value From User------------------------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tEnter the arr[%d] : ", i+1);
		scanf(" %d",&arr[i]);
	}
	
	printf("\n\n\t--------------Display value------------------- ");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tArr[%d] : %d", i, arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n\n\t--------------Ascending Order------------------- ");
	for(i=0;i<5;i++)
	{
		printf("\n\n\tArr[%d] : %d", i, arr[i]);
	}
}
