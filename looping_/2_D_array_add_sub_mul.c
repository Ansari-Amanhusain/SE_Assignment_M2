/*
WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/
#include<stdio.h>
main()
{
	int mat1[3][3], mat2[3][3], r, c;
	
	printf("\n\n\tEnter matrix 1-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
			
		{
			printf("\n\n\tEnter the matrix[%d][%d] : ", r, c);
			scanf("%d",&mat1[r][c]);
		}
	}
	
	printf("\n\n\tEnter matrix 2-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
			
		{
			printf("\n\n\tEnter the matrix[%d][%d] : ", r, c);
			scanf("%d",&mat2[r][c]);
		}
	}

    printf("\n\n\tDisplay matrix 1-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mat1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\tDisplay matrix 2-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mat2[r][c]);
		}
		printf("\n");
	}

}
